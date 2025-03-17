/*
    Writing functions that call other written functions
*/

#include <stdio.h>

void one_three(void); // Function prototype, gives compiler info about the function before defining it <return type> <function name> (<arguments>)

void two(void){
    puts("two"); // Can use puts or printf
}



int main(){
    one_three();
    return 0;
}

void one_three(){
    puts("one");
    two();
    puts("three");
}