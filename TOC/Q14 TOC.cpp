#include <stdio.h>
#include <string.h>
int simulateNFA(char *str) {
    int i = 0, len = strlen(str);
    if (str[i] != 'b') return 0;
    i++;
    for (; i < len - 1; i++) {
        if (str[i] != 'a' && str[i] != 'b') return 0;
    }
    if (str[len - 1] != 'a') return 0;
    return 1;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf(simulateNFA(str) ? "Accepted\n" : "Rejected\n");
    return 0;
}
