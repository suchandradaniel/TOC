#include <stdio.h>
#include <string.h>
int checkString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] != 'a') {
            return 0;
        }
    }
    return 1; 
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (checkString(str)) {
        printf("The string belongs to the language.\n");
    } else {
        printf("The string does not belong to the language.\n");
    }
    return 0;
}
