#include<stdio.h>
#include<ctype.h>

int main(){

    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    int i=0;

    while(s[i]!='\0'){
        s[i] = toupper(s[i]);
        i++;
    }

    printf("The word is %s\n", s);
    
    return 0;
}