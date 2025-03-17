/*
    Enter age in years, return how many minutes in years
*/

#include <stdio.h>

int main(){
    int years = 0;
    int minutes = 0;

    puts("Enter your age in years: "); // put string into console
    scanf("%d", &years); // Takes input from user

    minutes = years * 365 * 24 * 60;

    printf("\"%d\" years is \"%d\" minutes\n", years, minutes);

    return 0;
}
