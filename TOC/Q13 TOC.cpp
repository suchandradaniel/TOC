#include <stdio.h>
#include <string.h>
int simulateDFA(char *str) {
    int len = strlen(str);
    if (str[0] != 'a' || str[len - 1] != 'b') return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'b') return 0; 
    }
    return 1;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf(simulateDFA(str) ? "Accepted\n" : "Rejected\n");
    return 0;
}
