#include<stdio.h>

int main(){
    char s1[100], s2[100];

    int freq1[256] = {0};
    int freq2[256] = {0};

    printf("Enter first string s1: ");
    scanf("%s", s1);
    printf("Enter second string s2: ");
    scanf("%s", s2);

    for(int i=0;i<s1[i]!='\0';i++){
        freq1[(unsigned char)s1[i]]++;
    }

    for(int i=0;i<s2[i]!='\0';i++){
        freq2[(unsigned char)s2[i]]++;
    }

    int flag = 1;

    for(int i=0;i<256;i++){
        if(freq1[i]!=freq2[i]){
            flag = 0;
            break;
        }
    }

    if(flag){
        printf("ANAGRAM\n");
    }
    else
    printf("NOT ANAGRAM\n");
    
    return 0;
}