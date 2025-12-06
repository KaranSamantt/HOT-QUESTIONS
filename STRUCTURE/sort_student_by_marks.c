#include <stdio.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    struct Student s[5], temp;
    int i, j;

   
    printf("Enter data for 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    
    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(s[i].marks > s[j].marks) {   
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    
    printf("\nStudents sorted by marks :\n");
    for(i = 0; i < 5; i++) {
        printf("%s = %.2f\n", s[i].name, s[i].marks);
    }

    return 0;
}
