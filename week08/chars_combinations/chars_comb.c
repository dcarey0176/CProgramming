

#include <stdio.h>

void printCharsCombs(void);

int main(void){
    printCharsCombs();

    return 0;
}

// Want to print all the combinations of 2 uppercase characters -- 26^2 combinations
void printCharsCombs(void){
    char outer = 'A';
    while (outer <= 'Z'){
        char inner = 'A';
        while (inner <= 'Z'){
            if (inner != outer){
            printf("%c %c\n", outer, inner);
            }
            inner++;
        }
        outer++;
    }
}
// Assignment for break, what if AB and BA are the same thing