#include<stdio.h>

int main(){
    int m, n;

    printf("Enter row & column: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("A:\n");
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nA transpose: \n");
     for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
           printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}