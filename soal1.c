#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int N;
int adj[MAX][MAX];
int degree[MAX];

void computeDegree() {
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
    computeDegree();
    findMaxVertex();
    findIsolated();
    return 0;
}#include <stdio.h>

int N;
int matrix[100][100];
int degree [100];

void degreeandMax(){
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            degree[i]=0;
            if (matrix[i][j]==1){
                degree[i]+=1;
        }
    }

    for (int i=0; i<N; i++){ 
        printf("DEGREE %d %d\n", i, degree[i]);
    }

    int index=0, maxvertex=degree[0];
    for (int i=1; i<N; i++);
        if (degree[i]>maxvertex){
            maxvertex=degree[i];
            index=i;
        }
        printf("MAX_VERTEX %d\n", index);
    }
}

void isolatedNode(){
    int found=0;
    for (int i=0; i<N; i++){
        if (degree[i]==0){
            printf("ISOLATED %d\n", i);
            found=1;
        }
    }

    if (!found){
        printf("ISOLATED NONE");
    }

}
    

int main(){
    scanf ("%d", &N);
    for (int i=0; i<N; i++){
        for (int j=0; i<N; j++){
            scanf("%d", &matrix[i][j]);
        }  
    }
    degreeandMax();
    isolatedNode();
    return 0;
}
