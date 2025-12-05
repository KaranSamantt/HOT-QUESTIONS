#include<stdio.h>

int main(){
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int start = 0;
    int end = 0;
    
    while(s[end]!='\0'){
        end++;
    }
    end--;
    
    int ispalindrome = 1;
    
    while(start<end){
        if(s[start]!=s[end]){
            ispalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if(ispalindrome){
        printf("Yes its a palindrome\n");
    }
    else{
        printf("Not a palindrome\n");
    }

    return 0;
}