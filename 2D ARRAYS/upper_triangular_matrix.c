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
    printf("Upper triangular matrix:\n");
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j<i){
                printf("0 ");
            }
            else{
                printf("%d ", A[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}