#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[5]; 
    int i, searchID, found = 0;

  
    printf("Enter details of 5 employees:\n");
    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Name: ");
        scanf("%s", e[i].name);

        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }

   
    printf("\nEnter employee ID to search: ");
    scanf("%d", &searchID);

    for(i = 0; i < 5; i++) {
        if(e[i].id == searchID) {
            found = 1;
            printf("\nEmployee Found!\n");
            printf("ID     : %d\n", e[i].id);
            printf("Name   : %s\n", e[i].name);
            printf("Salary : %.2f\n", e[i].salary);
            break;
        }
    }

    if(!found) {
        printf("\nEmployee with ID %d not found.\n", searchID);
    }

    return 0;
}
