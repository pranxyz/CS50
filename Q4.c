#include <stdio.h>

int main() {
    char course_code[20];
    int n_assess;
    int n_students;
    printf("Enter the code for the course:  ");
    fgets(course_code, 20, stdin);
    printf("\nEnter the number of students: ");
    scanf("%d", &n_students);
    printf("Enter the number of assessments: ");
    scanf("%d", &n_assess);
    float marks[n_students][n_assess];
    for (int i = 0; i < n_students; i++){
        printf("\nEnter marks for next student\n");
        for(int j= 0; j < n_assess; j++) {
            printf("Enter the mark for assessment: ");
            scanf("%f", &marks[i][j]);
        }
    }
    printf("\n\nCourse Code: %s\n", course_code);
    for(int i = 0; i < n_students; i++) {
        printf("\nStudent %d marks:",(i + 1) );
        for(int j = 0; j < n_assess; j++){
            printf(" %.1f", marks[i][j]);
        }
    }
    printf("\n");
    return 0;
}