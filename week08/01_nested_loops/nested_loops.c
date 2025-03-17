
#include <stdio.h>

void printTriangleTopLeft(int size);
void printTriangleBottomLeft(int size);
void printTriangleTopLeftStars(int size);
void printTriangleBottomLeftStars(int size);
void printTriangleTopLeftNumbers(int size);
void printTriangleBottomRightStars(int size);

int main(void){
    // Scan a positive integer
    int n = 0;
    do {
        printf("Enter an integer: ");
        scanf("%d", &n);
    } while (n <= 0);
    printTriangleTopLeft(n);
    printf("\n\n");
    printTriangleBottomLeft(n);
    printf("\n\n");
    printTriangleTopLeftNumbers(n);

    printTriangleBottomRightStars(n);



    return 0;
}

// Enter a size
// 5
// *****
// ****
// ***
// **
// *

void printTriangleTopLeft(int size){
    for (int i = 0; i < size; i++){ // Establishes the amount of times the loop needs to run
        for (int j = 0; j < size - i; j++){ // prints character for size - i, because i increments but size is set
            printf("%c", '*');
        }
        puts(""); // New line after the nested loop
    }

}

void printTriangleBottomLeft(int size){
    for (int i = 0; i < size; i++){ // Establishes the amount of times the loop needs to run
        for (int j = 0; j < i+1; j++){ // prints character for j < i + 1 OR j <= i
            printf("%c", '*');
        }
        puts(""); // New line after the nested loop
    }

}


void printTriangleTopLeftNumbers(int size){
    for (int i = 0; i < size; i++){ // Establishes the amount of times the loop needs to run
        for (int j = 0; j < size - i; j++){ // prints character for size - i, because i increments but size is set
            printf("%d", j+1);
        }
        puts(""); // New line after the nested loop
    }
}

void printTriangleBottomRightStars(int size){
    for (int i = 0; i < size; i++){ // Establishes the amount of times the loop needs to run
        for (int j = 5; j >= 0; j--){ // prints character for j < i + 1 OR j <= i
            printf("*");
        }
        printf(" ");
        puts(""); // New line after the nested loop
    }

}
// TO DO
// just change the functions dont make new ones
// printTriangleTopLeftStars(int size)

// printTriangleBottomLeftStars(int size)
// 5
// *****
// 

// printTriangleBottomRightStars(int size)
// 5
//     *
//    **
//   ***
//  ****
// *****



// printTriangleTopLeftDecrement(int size)

// printTriangleTopLeftNumbers(int size) - DONE
// 5
// 12345
// 1234
// 123
// 12
// 1