#include<stdio.h>

int add(int n1, int n2){
    return n1+n2;
}
int sub(int n1, int n2){
    return n1-n2;
}
int mul(int n1, int n2){
    return n1*n2;
}
int divide(int n1, int n2){
    return n1/n2;
}

int main(){
    int num1, num2, choice;
    printf("MENU:\n1.ADD\n2.SUBTRACT\n3.DIVIDE\n4.MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if(choice==1){
        printf("The sum of %d + %d is %d", num1, num2, add(num1, num2));
    }
    else if(choice==2){
        printf("The subtration of %d - %d is %d", num1, num2, sub(num1, num2));
    }
    else if(choice==3){
        printf("The Division of %d/%d is %d", num1, num2, divide(num1, num2));
    }
    else if(choice==4){
        printf("The multiplication of %d X %d is %d", num1, num2, mul(num1, num2));
    }
    else{
        printf("Invalid input!");
    }


    return 0;
}