#include <stdio.h>

int main(){
    int row = 10; // initialize row

    while (row >=1){ // loop until row < 1
        int column = 1;
        while(column <= 10){
            printf("%s", (row %2) ? "<" : ">");
            ++column;
        }
        --row;
        puts("");
    }
}
    