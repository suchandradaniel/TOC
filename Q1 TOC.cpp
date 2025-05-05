#include <stdio.h>
#include <string.h>
int isAccepted(const char *str) {
    int len = strlen(str);
    if (len > 1 && str[0] == 'a' && str[len - 1] == 'a') {
        return 1; 
    }
    return 0;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isAccepted(str)) {
        printf("The string is accepted by the DFA.\n");
    } else {
        printf("The string is rejected by the DFA.\n");
    }
    return 0;
}
