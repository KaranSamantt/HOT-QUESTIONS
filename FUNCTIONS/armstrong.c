#include<stdio.h>

int isArmstrong(int num){
    int original = num;
    int sum = 0;
    while(num>0){
        int digit = num%10;
        sum = sum + (digit*digit*digit);
        num /= 10;
    }

    if(sum == original)
    return 1;
    else
    return 0;

}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

   if(isArmstrong(n)){
    printf("Yes its an armstrong number\n");
   }
   else
   printf("Not an armstrong number\n");

    
    
    return 0;
}