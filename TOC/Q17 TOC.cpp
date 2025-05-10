#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isValidA(char *str) {
    for (int i = 0; str[i]; i++) if (str[i] != 'a' && str[i] != 'b') return false;
    return true;
}
bool isValidCFG(char *str) {
    int len = strlen(str);
    if (len < 3 || str[0] != 'a' || str[len-1] != 'b') return false;
    char middle[100];
    strncpy(middle, str + 1, len - 2);
    middle[len - 2] = '\0';
    return isValidA(middle);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf(isValidCFG(str) ? "Accepted\n" : "Rejected\n");
    return 0;
}
