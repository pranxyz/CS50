#include <stdio.h>

int main() {
    char course[20];
    printf("Enter the code for the course:  ");
    fgets(course, 20, stdin);
    printf("\nCourse Code: %s", course);
    return 0;
}