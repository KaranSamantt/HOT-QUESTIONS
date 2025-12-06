#include<stdio.h>

int main(){
    int no[100], size;
    int *p = no;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for(int i=0;i<size;i++){
        scanf("%d", p+i); 
    }

    int max = p[0];          

    for(int i=1;i<size;i++){
        if(*(p+i) > max){    
            max = *(p+i);    
        }
    }

    printf("Maximum number = %d", max);
    return 0;
}