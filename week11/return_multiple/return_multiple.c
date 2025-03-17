

#include <stdio.h>
// Split the given integer n into tens and ones
// will return 1 if the integer is a 2 digit number, will return zero if its not
int splitDigits(int n, int *tens, int *ones);

// TODO
// Create a void function
// receive 2 doubles, receive two addresses
// return 1 if d2 is zero
// prints the average and sum of the two numbers
void sumAndAverage(double d1, double d2, double *sum, double *average);

int main(){
    int n = 98;
    int tens = 0;
    int ones = 0;
    splitDigits(n, &tens, &ones); // If you are passing a pointer and the pointer is not already defined, pass the address of the variable
    printf("%d has %d tens and %d ones\n", n, tens, ones);
    double d1 = 100;
    double d2 = 50;
    double sum = 0;
    double average = 0;
    sumAndAverage(d1, d2, &sum, &average);

    return 0;
}

int splitDigits(int n, int *tens, int *ones){
    if (n < 10 || n > 99){
        // Incorrect value of n
        return 1;
    }
    // mod 10 to get ones
    // divide by 10 to get tens
    int temp = 0;
    while (temp > 0){
        *tens = n / 10;
        *ones = n % 10;
    }
    
    return 0;
}


void sumAndAverage(double d1, double d2, double *sum, double *average){
    *average = (d1 + d2) / 2;
    *sum = d1 + d2;
    printf("The sum of %.0lf and %.0lf is %.0lf\n", d1, d2, *sum);
    printf("The average of %.0lf and %.0lf is %.0lf\n", d1, d2, *average);
}


