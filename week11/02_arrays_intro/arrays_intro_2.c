#include <stdio.h>

#define SIZE 10

// TODO
// int secondZero(const int *arr, int size);
// int nthZero(const int *arr, int size, int n);
// int hasEvenZeroes(const int *arr, int size); Returns 1 if there are an even number of zeroes and 0 if there are no zeroes or odd number of zeroes

// Linear search, goes from one point to another in order, element by element

// Prints the doubled values of the given array
void printDoubledArray(const int *arr, int size); // 'const' - the given array cannot be modified, just read

// Searching in arrays
/*
    Return the index of the first zero element in the given array
    Return -1 if there are no zeroes
*/
int firstZero(const int *arr, int size);
int lastZero(const int *arr, int size);

int main(void) {
    int a[SIZE] = {9,1,-4,0,987,6};

    printDoubledArray(a, SIZE);

    int has_zeroes = firstZero(a, SIZE);
    if (has_zeroes == -1) {
        puts("There are no zeroes in the array");
    }
    else {
        int last_zero = lastZero(a, SIZE);
        printf("The first zero of the array is at a[%d]\n", has_zeroes);
        printf("The last zero of the array is at a[%d]\n", last_zero);
    }
    return 0;
}

void printDoubledArray(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        // arr[i] *= 2; won't be allowed to compile, because it is trying to modify the original value
        printf("%d ", arr[i] * 2);
    }
    puts("");

}

int firstZero(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            return i;
        }
    }
    // No zeroes
    return -1;
}

int lastZero(const int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            return i;
        }
    }
    // No zeroes
    return -1;
}