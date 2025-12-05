#include <stdio.h>
#include <string.h>

void reverse(char str[]){
    int len = strlen(str);
    int i = 0, j = len - 1;

    while(i < j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main(){
    char r[100];

    printf("Enter a string: ");
    scanf("%s", r);

    reverse(r);

    printf("The reversed string is %s", r);

    return 0;
}
