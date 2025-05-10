#include <stdio.h>
#define MAX_STATES 10
void epsilonClosure(int e_closure[MAX_STATES][MAX_STATES], int n, int state) {
    int closure[MAX_STATES] = {0};
    int stack[MAX_STATES], top = 0;
    stack[top++] = state;
    closure[state] = 1;
    while (top > 0) {
        int current = stack[--top];
        for (int i = 0; i < n; i++) {
            if (e_closure[current][i] && !closure[i]) {
                closure[i] = 1;
                stack[top++] = i;
            }
        }
    }
    printf("e-closure(q%d) = {", state);
    for (int i = 0; i < n; i++) {
        if (closure[i]) printf("q%d ", i);
    }
    printf("}\n");
}
int main() {
    int n = 3; 
    int e_closure[MAX_STATES][MAX_STATES] = {0}; 
    e_closure[0][1] = 1;
    e_closure[1][2] = 1;
    e_closure[2][0] = 1;
    for (int i = 0; i < n; i++) {
        epsilonClosure(e_closure, n, i);
    }
    return 0;
}
