#include <stdio.h>
#include <string.h>
#include "../include/functions.h"

char tasks[MAX_TASKS][MAX_LENGTH];
int taskCount = 0;

void loadTasksFromFile() {
    FILE *file = fopen("../tasks.txt", "r");
    if (file == NULL) {
        return;
    }

    while (fgets(tasks[taskCount], MAX_LENGTH, file)) {
        tasks[taskCount][strcspn(tasks[taskCount], "\n")] = '\0';
        taskCount++;
    }

    fclose(file);
}

void addTask() {
    if (taskCount >= MAX_TASKS) {
        printf("Task list is full!\n");
        return;
    }

    printf("Enter task: ");
    getchar();
    fgets(tasks[taskCount], MAX_LENGTH, stdin);
    tasks[taskCount][strcspn(tasks[taskCount], "\n")] = '\0';

    taskCount++;

    FILE *file = fopen("../tasks.txt", "a");
    if (file != NULL) {
        fprintf(file, "%s\n", tasks[taskCount - 1]);
        fclose(file);
    }

    printf("Task added and saved successfully!\n");
}

void viewTasks() {
    if (taskCount == 0) {
        printf("No tasks available.\n");
        return;
    }

    printf("\n--- Your Tasks ---\n");
    for (int i = 0; i < taskCount; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
}

void deleteTask() {
    if (taskCount == 0) {
        printf("No tasks to delete.\n");
        return;
    }

    viewTasks();

    int index;
    printf("Enter the number of the task to delete: ");
    scanf("%d", &index);

    if (index < 1 || index > taskCount) {
        printf("Invalid task number.\n");
        return;
    }

    for (int i = index - 1; i < taskCount - 1; i++) {
        strcpy(tasks[i], tasks[i + 1]);
    }
    taskCount--;

    FILE *file = fopen("../tasks.txt", "w");
    for (int i = 0; i < taskCount; i++) {
        fprintf(file, "%s\n", tasks[i]);
    }
    fclose(file);

    printf("Task deleted successfully.\n");
}