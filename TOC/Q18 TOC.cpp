#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isAccepted(char *str) {
    int len = strlen(str);
    if (len < 4) return false;
    int state = 0;  // Start state
    for (int i = 0; i < len; i++) {
        if (state == 0 && str[i] == '0') state = 1;
        else if (state == 1 && str[i] == '0') state = 2;
        else if (state == 2 && (str[i] == '0' || str[i] == '1')) state = 2;
        else if (state == 2 && str[i] == '1') state = 3;
        else if (state == 3 && str[i] == '1') state = 4;  
    }
    return state == 4;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf(isAccepted(str) ? "Accepted\n" : "Rejected\n");
    return 0;
}
