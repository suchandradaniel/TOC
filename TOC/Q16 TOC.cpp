#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isValidA(char *str) {
    for (int i = 0; str[i]; i++) if (str[i] != '0' && str[i] != '1') return false;
    return true;
}
bool isValidCFG(char *str) {
    int len = strlen(str);
    if (len < 3) return false;
    for (int i = 0; i < len - 1; i++) {
        if (str[i] == '0' && str[i + 1] == '0') {
            char before[100], after[100];
            strncpy(before, str, i); before[i] = '\0';
            strcpy(after, str + i + 2);
            return isValidA(before) && isValidA(after); 
        }
    }
    return false;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf(isValidCFG(str) ? "Accepted\n" : "Rejected\n");
    return 0;
}
