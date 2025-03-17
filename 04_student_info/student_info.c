#include <stdio.h>

int main() {
    char *name = "John Doe"; // *name creates a string variable named "name"
    int course_id = 2271;
    int student_id = 10234;
    int diff = 10234- 2271;
    printf("Name: %s\n",name);
    printf("Course ID: %d\n", course_id);
    printf("Student ID: %d\n", student_id);
    printf("Student ID (%d) - Course ID(%d) is: %d\n", student_id, course_id, diff);
    return 0;
}

