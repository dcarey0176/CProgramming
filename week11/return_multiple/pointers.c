

#include <stdio.h>
void swapPointers(int *a_ptr, int *b_ptr);

int main(){
    int num1 = 5;
    int num2 = 10;
    int *num1_ptr = &num1;
    int *num2_ptr = &num2;
    swapPointers(num1_ptr, num2_ptr);

    return 0;
}

void swapPointers(int *a_ptr, int *b_ptr){
    int temp = *a_ptr; // Need a temp variable to swap values
    *a_ptr = *b_ptr;
    *b_ptr = temp;
    printf("%d and %d were swapped with %d and %d\n", *b_ptr, *a_ptr, *a_ptr, *b_ptr);
}