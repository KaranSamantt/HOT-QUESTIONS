#include<stdio.h>

int main(){

    char s1[100], s2[100];
    printf("Enter a string s1: ");
    scanf("%s", s1);
    printf("Enter a string s2: ");
    scanf("%s", s2);

    int i=0;
    int flag = 0;

    while(s1[i]!='\0' && s2[i]!='\0'){
        if(s1[i]!=s2[i]){
        flag = 1;
        break;}
        i++;
    }

    if(flag == 0 && s1[i]=='\0' && s2[i]=='\0'){
        printf("%s & %s are same", s1, s2);
    }
    else{
        printf("%s & %s are not same", s1, s2);
    }

    return 0;
}