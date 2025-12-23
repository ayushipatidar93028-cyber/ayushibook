#include <stdio.h>

int main()
{
    int roll[100], n = 0, i;
    char name[100][50];
    float marks[100];
    int choice;

    while (1)
    {
        printf("\n--- Student Record System ---\n");
        printf("1.Add Student\n");
        printf("2.Show All\n");
        printf("3.Exit\n");
        printf("Enter Choice:\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Roll No: ");
            scanf("%d", &roll[n]);
            printf("Enter Name: ");
            scanf("%s", name[n]);
            printf("Enter Marks: ");
            scanf("%f", &marks[n]);
            n++;
            printf("Student Added!\n");
        }
        else if (choice == 2)
        {
            printf("All Students\n");
            for (i = 0; i < n; i++)
                printf("Roll: %d | Name: %s | Marks: %.2f\n", roll[i], name[i], marks[i]);
        }
        else if (choice == 3)
        {
            printf("Exiting...");
            break;
        }
        else
            printf("Invalid choice!\n");
    }

    return 0;
}
