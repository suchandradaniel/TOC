#include <stdio.h>
#include <string.h>
int parseS(const char* str, int* index) {
    if (str[*index] == '0') {
        (*index)++;
        if (parseS(str, index) && str[*index] == '0') {
            (*index)++;
            return 1;
        }
    } else if (str[*index] == '1') {
        (*index)++;
        if (parseS(str, index) && str[*index] == '1') {
            (*index)++;
            return 1;
        }
    } else if (str[*index] == '0' || str[*index] == '1') {
        (*index)++;
        return 1;
    } else {
        return 1; 
    }
    return 0;
}
int isAccepted(const char* str) {
    int index = 0;
    return parseS(str, &index) && str[index] == '\0';
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isAccepted(str)) {
        printf("The string belongs to the language defined by the CFG.\n");
    } else {
        printf("The string does not belong to the language defined by the CFG.\n");
    }
    return 0;
}
