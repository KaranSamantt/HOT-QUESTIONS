#include<stdio.h>

struct fiveStudents{
    char name[100];
    float marks;
};
int main(){
    struct fiveStudents s[3];

   
    printf("Enter data for 3 students:\n");

    for(int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i+1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    int maxIndex = 0;

    if(s[1].marks > s[maxIndex].marks) {
        maxIndex = 1;
    }

    if(s[2].marks > s[maxIndex].marks) {
        maxIndex = 2;
    }

    printf("\nStudent with highest marks is: %s (%.2f)\n",
            s[maxIndex].name, s[maxIndex].marks);
    

    return 0;
}