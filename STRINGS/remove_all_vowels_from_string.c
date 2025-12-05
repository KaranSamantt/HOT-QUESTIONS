#include<stdio.h>

int main(){
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);


    int i=0, j =0;

    while(s[i]!='\0'){
        char c = s[i];
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' ||
        c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
        i++;
        continue;;
    }
    s[j] = s[i];
    i++;
    j++;
    }
    s[j] = '\0';

    printf("After removing: %s", s);
    return 0;
}