


#include <stdio.h>

void setToZero(int *n);

double productPointers(double *p1, double *p2);


int main(){
    int luck = 100;
    
    printf("%d\n", luck);
    // Modify
    luck += 10;
    printf("The address of luck is %p\n", &luck); // %p conversion specifier is used to print pointers

    // Pointer - is a variable that stores memory addresses
    // Create a pointer
    // <data type> *pointerName;

    // Create an integer pointer
    int *luck_ptr = &luck; // Pointer variable that stores the address of luck

    // Access the data the pointer is pointing to
    // * - dereferencing operator - like a key to the lock

    printf("Dereference luck_ptr %d\n", *luck_ptr);
   
    // Modify data through the pointer
    *luck_ptr = 500; 
    setToZero(&luck); // This is called passing by reference, NOT passing by value
    printf("The value of luck is %d\n", luck);

    double num1 = 5;
    double num2 = 10;
    printf("num1 * num2 = %.2lf\n", productPointers(&num1, &num2));

    

    // float number1 = 1;
    // float *pF;
    // pF = &number1;
    // float number2 = *pF;
    // *pF *= 2;
    // printf("%.2lf\n", number1);
    // printf("%.2lf\n", *pF);
    // printf("%.2lf\n", number2);
    // printf("%p\n", &number1);
    // printf("%p\n", pF);

    return 0;

}


void setToZero(int *n){
    *n = 0;
}

double productPointers(double *p1, double *p2){
    return *p1 * *p2;
}