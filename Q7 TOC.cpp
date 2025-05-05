#include <stdio.h>
int parseA(const char* str, int* index) {
    while (str[*index] == '0' || str[*index] == '1') (*index)++;
    return 1; 
}
int parseS(const char* str, int* index) {
    int start = *index;
    if (!parseA(str, index) || str[*index] != '1') return 0;
    (*index)++;
    if (str[*index] != '0') return 0;
    (*index)++;
    if (str[*index] != '1') return 0;
    (*index)++;
    if (!parseA(str, index)) return 0;
    return str[*index] == '\0';
}
int main() {
    char str[100];
    int index = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    if (parseS(str, &index)) {
        printf("The string belongs to the language defined by the CFG.\n");
    } else {
        printf("The string does not belong to the language defined by the CFG.\n");
    }
    return 0;
}
