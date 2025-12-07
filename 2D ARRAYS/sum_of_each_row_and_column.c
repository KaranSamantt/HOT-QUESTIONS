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

    printf("\nSum of this row is: \n");
    for(int i=0;i<m;i++){
        int rowSum = 0;
        for(int j=0;j<n;j++){
            rowSum += A[i][j];
        }
        printf("Row %d = %d\n", i+1, rowSum);
    }

    printf("\nSum of this column is: \n");
    for(int j=0;j<n;j++){
        int colSum = 0;
        for(int i=0;i<m;i++){
            colSum += A[i][j];
        }
        printf("Column %d = %d\n", j+1, colSum);
    }

    return 0;
}