
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// symbolic constant
#define SIZE 100

// Create a function to work with arrays
void printArray(int *arr, int size);

int main(){
    srand(time(0));
    int arr[SIZE];
    arr[0] = 999;
    arr[SIZE-1] = 111;
    printf("First %d; Last %d\n", arr[0], arr[SIZE-1]);

    
    for (int i = 0; i < SIZE; i++){
        arr[i] = i;
        printf("%d ", arr[i]);
    }

    // Reinitialize array with values from 10 to 100
    // 10 20 30 40 100
    int arr2[10];
    int val = 10;
    for (int i = 0; i < SIZE;i++){
        arr2[i] = val;
        val += 10;
        printf("%d ", arr2[i]);
    }
    puts("");
    // Again but from with random numbers from -20 to 20
    
    int arr3[10];
    for (int i = 0; i < SIZE;i++){
        arr3[i] = rand() % 41 - 20;
        printf("%d ", arr3[i]);
    }

    return 0;
}

void printArray(int *arr, int size){

}

// Create voidSetNegativeToZero()
// If you have a negative, set it to zero