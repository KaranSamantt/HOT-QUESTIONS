#include<stdio.h>

int main(){
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);


    int count = 0;

    int i=0;
    while(s[i]!='\0'){
        count++;
        i++;
    }

    printf("The length of string is %d", count);

    return 0;
}