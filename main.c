#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LEN 50

typedef struct
{
    int id;
    char name[NAME_LEN];
    int age;
} Student;

void showMenu()
{
    printf("\n=== Student Record Manager (C) ===\n");
    printf("1. Add student\n");
    printf("2. List all students\n");
    printf("3. Search student by ID\n");
    printf("4. Exit\n");
}

void addStudent(Student students[], int *count)
{
    if (*count >= MAX_STUDENTS)
    {
        printf("\nCannot add more students (limit reached).\n");
        return;
    }

    Student s;

    printf("\nEnter student ID: ");
    scanf("%d", &s.id);

    // clear leftover newline from buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }

    printf("Enter student name: ");
    fgets(s.name, NAME_LEN, stdin);
    // remove trailing newline from name
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter student age: ");
    scanf("%d", &s.age);

    students[*count] = s;
    (*count)++;

    printf("\nStudent added successfully!\n");
}

void listStudents(Student students[], int count)
{
    if (count == 0)
    {
        printf("\nNo students in the record.\n");
        return;
    }

    printf("\nList of students:\n");
    printf("-----------------------------\n");
    for (int i = 0; i < count; i++)
    {
        printf("ID: %d | Name: %s | Age: %d\n",
               students[i].id, students[i].name, students[i].age);
    }
}

void searchStudent(Student students[], int count)
{
    if (count == 0)
    {
        printf("\nNo students to search.\n");
        return;
    }

    int searchId;
    printf("\nEnter student ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < count; i++)
    {
        if (students[i].id == searchId)
        {
            printf("\nStudent found:\n");
            printf("ID: %d | Name: %s | Age: %d\n",
                   students[i].id, students[i].name, students[i].age);
            return;
        }
    }

    printf("\nStudent with ID %d not found.\n", searchId);
}

int main()
{
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    while (1)
    {
        showMenu();
        printf("\nChoose an option (1-4): ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            // clear bad input
            int c;
            while ((c = getchar()) != '\n' && c != EOF)
            {
            }
            continue;
        }

        switch (choice)
        {
        case 1:
            addStudent(students, &count);
            break;
        case 2:
            listStudents(students, count);
            break;
        case 3:
            searchStudent(students, count);
            break;
        case 4:
            printf("\nExiting... Goodbye!\n");
            return 0;
        default:
            printf("\nInvalid choice, please try again.\n");
        }
    }

    return 0;
}