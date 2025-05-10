#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isValidA(char *str) {
    if (*str == '\0') return true;
    while (*str) {
        if (*str != 'a' && *str != 'b') return false;
        str++;
    }
    return true;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isValidA(str)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}
