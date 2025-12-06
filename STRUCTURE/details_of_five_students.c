#include<stdio.h>

struct fiveStudents{
    char name[100];
    int rollno;
    float marks;
};
int main(){
    struct fiveStudents s[5];

   
    printf("Enter data for 5 students:\n");

    for(int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i+1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n\nDetails of 5 students:\n");
    for(int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name  : %s\n", s[i].name);
        printf("Roll  : %d\n", s[i].rollno);
        printf("Marks : %.2f\n", s[i].marks);
    }

    return 0;
}