

#include <stdio.h>

// Prototype
void temperatureDescription(double temp);

// Check if given number in range 0-10
void checkRange(int num);

// Checks exact numbers
void checkExact(double num);

// Checks largest number
void largestVoid(int a, int b, int c);

int largest(int a, int b, int c);


int main(){
    double temp;
    double num;
    int a;
    int b;
    int c;
    // printf("Enter your temp: ");
    // scanf("%lf", &temp);
    // temperatureDescription(temp);

    // printf("Enter a number: ");
    // scanf("%lf", &num);
    // checkExact(num);
    printf("Enter a, b, and c: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("%d\n",largest(a, b, c));


    return 0;
}
// *********************************
void temperatureDescription(double temp){
    if (temp > 101){
        puts("High Fever");
    }
    else if (temp > 99){
        puts("Low Fever");
    }
    else if (temp > 97){
        puts("Normal");
    }
    else {
        puts("Low Temperature");
    }
}

// *********************************
void checkRange(int num){
    if (num >= 0 && num <=10 ){
        printf("%d is in the range 0-10\n", num);
    }
    else {
        printf("%d is in not the range 0-10\n", num);
    }
}

// *********************************
void checkExact(double num){
    if (num == 1.4567 || num == 4567.1 ){
        printf("You guessed the correct number");
    }
    else {
        printf("You did not guess the correct number\n");
    }
}

// *********************************
void largestVoid(int a, int b, int c){
    if (a >= b && a >= c){
        printf("A is the largest number: %d\n", a);
    }
    else if (b >= a && b >= c){
        printf("B is the largest number: %d\n", b);
    }
    else if (c >= a && c >= b){
        printf("C is the largest number: %d\n", c);
    }
    else if (a == b && a == c){
        printf("All numbers are equal");
    }
}

int largest(int a, int b, int c){
    if (a >= b && a >= c){
        return a;
    }
    else if (b >= a && b >= c){
        return b;
    }
    else{
        return c;
    }
    
}


