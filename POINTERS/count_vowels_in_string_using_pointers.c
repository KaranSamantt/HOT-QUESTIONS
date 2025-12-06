#include<stdio.h>

int main(){
    char c[100];
    char *p = c;

    printf("Enter a string: ");
    scanf("%s", p);

    int count = 0;
    for(int i=0;i<p[i]!='\0';i++){
        if(p[i]=='A' || p[i]=='E' || p[i]=='I' || p[i]=='O' || p[i]=='U' ||
    p[i]=='a' || p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u'){
        count++;
    }
    }

    printf("The no. of vowels in %s is %d", p, count);
    return 0;
}