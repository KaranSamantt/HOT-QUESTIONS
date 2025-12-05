#include<stdio.h>

int sum(int n1, int n2){
    int sum = n1 + n2;
    return sum;
}
int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum(num1, num2);
    printf("%d", sum(num1, num2));
    return 0;
}