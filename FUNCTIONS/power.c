#include<stdio.h>
#include<math.h>

double power(int n1, int n2){
    return pow(n1, n2);
}

int main(){
    int num1, num2;
    printf("Enter number and upto which power: ");
    scanf("%d %d", &num1, &num2);

    double result = power(num1, num2);
    printf("%d^%d=%.0lf", num1, num2, result);
    
    return 0;
}