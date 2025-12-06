#include<stdio.h>

struct student{
    char name[100];
    int roll;
    float marks;
};

int main(){
    struct student s;

    printf("Enter name : ");
    scanf("%s", &s.name);

     printf("Enter roll no : ");
    scanf("%d", &s.roll);

     printf("Enter marks : ");
    scanf("%f", &s.marks);

    printf("\nStuden details:\n");
    printf("Name = %s\n", s.name);
    printf("Roll no = %d\n", s.roll);
    printf("Marks = %.2f\n", s.marks);
    return 0;
}