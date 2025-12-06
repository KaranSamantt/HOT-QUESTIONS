#include<stdio.h>

int main(){
    int arr[100], size;
    int *p = arr;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for(int i=0;i<size;i++){
        scanf("%d", p+i);
    }

     for(int i=0;i<size;i++){
        printf("%d ", *(p+i));
    }





    return 0;
}