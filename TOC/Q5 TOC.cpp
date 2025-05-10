#include <stdio.h>
#include <string.h>
int parseS(const char* str, int* index);
int parseA(const char* str, int* index);
int parseS(const char* str, int* index) {
    int start = *index;
    if (str[start] == '0') {
        (*index)++;
        if (parseS(str, index) && str[*index] == '0') {
            (*index)++;
            return 1;
        }
        *index = start; // Backtrack
    }
    return parseA(str, index);
}
int parseA(const char* str, int* index) {
    if (str[*index] == '1') {
        (*index)++;
        return parseA(str, index);
    }
    return 1; // e case
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
