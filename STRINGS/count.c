#include<stdio.h>

int main(){
    char s[100];
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    
    int i=0, vow=0, con=0, dig=0, spc=0;

    while(s[i]!='\0'){
        
        char c = s[i];
            if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' ||
            c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                vow++;
            }
            else if(c == ' '){
                spc++;
            }
            else if(c>='0' && c<='9'){
                dig++;
            }
             else if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            con++;
        }
        i++;

    }

    printf("Vowel:%d\nConsonant:%d\nDigits:%d\nspace:%d\n", vow, con, dig, spc);
    
    return 0;
}