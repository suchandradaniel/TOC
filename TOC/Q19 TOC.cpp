#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isValidA(char *str) {
    while (*str) {
        if (*str != 'a' && *str != 'b') return false;
        str++;
    }
    return true;
}
bool isValidCFG(char *str) {
    if (str[0] != 'a' || str[1] == '\0') return false;
    char *part = str + 1;
    if (!isValidA(part)) return false;
    part = strchr(part, 'a');
    if (!part || !isValidA(part + 1)) return false;
    part = strchr(part + 1, 'a');
    return part && isValidA(part + 1);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf(isValidCFG(str) ? "Accepted\n" : "Rejected\n");
    return 0;
}
