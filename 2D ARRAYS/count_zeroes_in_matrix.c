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

    int count = 0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]==0){
                count++;
            }
        }
    }
    
    printf("\nTotal no. of zeroes in matrix is: %d \n", count);

    return 0;
}