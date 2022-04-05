#include <stdio.h>

int main() {
    char course[20];
    int i, num_assessments;
    double assessments[10];
    printf("Enter the code for the course:  ");
    fgets(course, 20, stdin);
    printf("\nEnter the number of assessments: ");
    scanf("%d", &num_assessments);
    printf("\n");
    for (i = 0; i < num_assessments; ++i) {
        printf("Enter the mark for assessment: ");
        scanf("%lf", &(assessments[i]));
    }
    printf("\nCourse Code: %s", course);
    printf("\nStudent marks:");
    for (i = 0; i < num_assessments; ++i) {
        printf(" %g", assessments[i]);
    }
    printf("\n");
    return 0;
}