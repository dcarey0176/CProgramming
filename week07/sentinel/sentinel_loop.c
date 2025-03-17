

#include <stdio.h>

double avgStudentGradesSentinel(void);
double getGrade(void);

int main(){
    printf("%.2lf\n",avgStudentGradesSentinel());
    // for(int i = 0; i <5; i++){
    //     printf("%d\n", i);
    // }
    return 0;
}

double avgStudentGradesSentinel(void){
    double grade = 0;// The current student grade
    double total_grade = 0;
    int n_grade = 0;
    while (grade != -1){ // -1 - sentinel value
        grade = getGrade();
        if(grade >= 0){
            n_grade++;
            total_grade += grade;
        }
        
        

        if (n_grade == 0){
            puts("No grades were entered");
            return 0;
        }
        
    }
    
    return total_grade / n_grade;
}

// Make it accept -1 but no other numbers less than 1 and make sure the average isnt -1 if you only enter -1

double getGrade(){
    double grade = 0;
    // get the grade
    do {
        printf("Enter grade (-1 to exit): ");
        scanf("%lf", &grade);
        if (grade < -1 || grade > 100){
            puts("The grade should be in [-1; 100]");
        }
    } while (grade < -1 || grade > 100);
    return grade;
}