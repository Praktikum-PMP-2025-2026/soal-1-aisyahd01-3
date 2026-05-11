#include <stdio.h>
#include <stdlib.h>

#define MAX 100
int N;
int adj[MAX][MAX];
int degree [MAX];


void Degree() {
    for (int i = 0; i < N; i++) {
        degree[i] = 0;
        for (int j = 0; j < N; j++) {
            degree[i] += adj[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        printf("DEGREE %d %d\n", i, degree[i]);
    }
}


void findMaxVertex() {
    int max = degree[0];
    int index = 0;

    for (int i = 1; i < N; i++) {
        if (degree[i] > max) {
            max = degree[i];
            index = i;
        }
    }

    printf("MAX_VERTEX %d\n", index);
}

void findIsolated() {
    int found = 0;

    for (int i = 0; i < N; i++) {
        if (degree[i] == 0) {
            printf("ISOLATED %d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("ISOLATED NONE\n");
    }
}

int main() {
   scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &adj[i][j]);
        }
    }
    Degree();
    findMaxVertex();
    findIsolated();
    return 0;
}
