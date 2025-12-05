#include<stdio.h>

int main(){
    char s[100];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    int i=0, j=0;

    while(s[i]!='\0'){
        if(s[i]!=' '){
            s[j++] = s[i];
        }
        i++;
    }
    s[j] = '\0';
    
    printf("After removing: %s", s);

    return 0;
}