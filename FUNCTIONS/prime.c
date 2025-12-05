#include<stdio.h>

int prime(int n){
    if(n<2){
        return 0;
    }
    
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
        }
     return 1;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(prime(num)){
    printf("%d is a prime number", num);
}
    else{
        printf("Not a prime number");
    }
    
    return 0;
}