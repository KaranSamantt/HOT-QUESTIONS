#include<stdio.h>

int main(){
    char s[100];
    int freq[256] = {0};

    printf("Enter a string: ");
    scanf("%s", s);

    int i=0;
    while(s[i]!='\0'){
        freq[(unsigned char)s[i]]++;
        i++;
    }

    for(int i=0;i<256;i++){
        if(freq[i]>0){
            printf("%c -> %d times\n", i, freq[i]);
        }
    }



    return 0;
}