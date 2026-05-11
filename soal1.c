#include <stdio.h>

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

    int index=0, maxvertex=0;
    for (int i=0; i<N; i++);
        for (degree[i]>maxvertex){
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
