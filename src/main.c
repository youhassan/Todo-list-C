#include <stdio.h>
#include "../include/functions.h"

int main() {
    int choice;

loadTasksFromFile();

    do {
        printf("\n--- To-Do List Menu ---\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Delete Task\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                deleteTask();
                break;
            case 0:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

    return 0;
}