/*
    The program computes the rootes of the quadratic equation
*/

// Function prototype
void printPrompt(char c);
int getCoefficient(void);
int countDiscriminant(int a, int b, int c);
void printRootes(int a, int b, int c);

#include <stdio.h>
#include <math.h>

int main(){
    printPrompt('a');
    int a = getCoefficient();
    printPrompt('b');
    int b = getCoefficient();
    printPrompt('c');
    int c = getCoefficient();
    printf("%d, %d, %d", a, b, c);


    return 0;
}

// Create function
void printPrompt(char ch){
    printf("Enter the coefficient %c: ", ch);
   

}

//Create function
int getCoefficient(void){
    int coEff;
    scanf("%d", &coEff);
    return coEff;
}

// Create Function
int countDiscriminant(int a, int b, int c){
    return (b * b) - (4 * a * c);
}

void printRootes(int a, int b, int c){
    // calc discriminant
    int discrim = countDiscriminant(a, b, c);
    if (discrim < 0) {
        puts("No real rootes");
    }
    else if (discrim == 0){
        int x = -b / (2*a);
        printf("x = %d\n", x);
    }
    else if (discrim > 0){
        double x1 = (-b + sqrt(discrim) / (2 * a));
        double x2 = (-b - sqrt(discrim) / (2 * a));
        printf("x1 = %f, x2 = %f\n", x1, x2);
    }

}
// Does not work because sqrt function