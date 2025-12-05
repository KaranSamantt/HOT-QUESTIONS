#include<stdio.h>


int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    

    printf("The factorial of this number %d is %d", num, factorial(num));
    return 0;
}