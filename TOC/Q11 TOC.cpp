#include <stdio.h>
#define MAX_STATES 5
int epsilonClosure[MAX_STATES][MAX_STATES];
int nstates = 5;
void findClosure(int state, int closure[MAX_STATES]) {
    closure[state] = 1;
    for (int i = 0; i < nstates; i++) {
        if (epsilonClosure[state][i] && !closure[i]) {
            findClosure(i, closure);  
        }
    }
}
void printEpsilonClosures() {
    for (int i = 0; i < nstates; i++) {
        int closure[MAX_STATES] = {0};
        findClosure(i, closure);
        printf("e-closure({%d}) = {", i);
        for (int j = 0; j < nstates; j++) {
            if (closure[j]) printf("%d ", j);
        }
        printf("}\n");
    }
}
int main() {
    epsilonClosure[0][1] = 1; 
    epsilonClosure[1][2] = 1;  
    epsilonClosure[3][4] = 1; 
    printEpsilonClosures();
    return 0;
}
