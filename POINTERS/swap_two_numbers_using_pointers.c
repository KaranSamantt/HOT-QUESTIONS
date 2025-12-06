#include<stdio.h>

int main(){
    int a1, a2;
    int *num1 = &a1;
    int *num2 = &a2;

    printf("Enter two numbers: ");
    scanf("%d %d", num1, num2);
    
    printf("Before swapping A = %d & B = %d\n", *num1, *num2);

    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    printf("After swapping swapping A = %d & B = %d\n", *num1, *num2);
    return 0;
}