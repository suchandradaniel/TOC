#include <stdio.h>
#include <string.h>
int simulateNFA(char *str) {
    int i = 0, state = 0;
    while (str[i] != '\0') {
        if (state == 0 && str[i] == 'b') state = 1;
        else if (state == 1 && str[i] == 'a') state = 2;
        i++;
    }
    return state == 2;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (simulateNFA(str)) 
        printf("Accepted\n");
    else 
        printf("Rejected\n");
    return 0;
}
