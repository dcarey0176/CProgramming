/*
 Get input from the keyboard
*/


#include <stdio.h>

int main (){
    int square_side = 1;
    int square_perimeter = 0;
    int square_area = 0;
    int square_side1;
    int square_side2;

    // Write the prompt
    puts("Enter the side of a square: "); // puts = put string = prints string to the console

    // Get the input
    scanf("%d", &square_side); // NO MESSAGES OTHER THAN CONVERSION SPECIFIERS IN SCANNERS
    // & is called an address operator, gets the variables address in memory

    puts("Enter the side length of a square: "); // puts = put string = prints string to the console
    scanf("%d", &square_side1);
    puts("Enter the side second length of a square: "); // puts = put string = prints string to the console
    scanf("%d", &square_side2);
    int area = square_side1 * square_side2;

    // Do the math
    square_perimeter = square_side * 4;
    printf("The perimeter of a square with side %d is %d\n", square_side, square_perimeter);
    printf("The area of a square with side length %d and %d is: %d", square_side1, square_side2, area);


    return 0;
}




