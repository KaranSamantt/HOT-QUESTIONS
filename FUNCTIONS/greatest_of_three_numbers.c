#include<stdio.h>

int three(int n1, int n2, int n3){
    if(n1>n2 && n1>n3){
        return n1;
    }
    else if(n2>n1 && n2>n3){
        return n2;
    }
    else if(n3>n1 && n3>n2){
        return n3;
    }
    else{
        printf("all are equal\n");
        return n1;
    }
}
int main(){
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int result = three(num1, num2, num3);

    printf("The greatest is %d", result);

    return 0;
}