#include<stdio.h>

int main(){
    char s[100], temp;
    printf("Enter a string: ");
    scanf("%s", s);

    int len = 0;
    
    while(s[len]!='\0'){
        len++;
    }
    
    for(int i=0;i<(len-1)/2;i++){
        temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }

    printf("Reversed string: %s\n", s);
    return 0;
}