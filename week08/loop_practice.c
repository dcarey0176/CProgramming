
#include <stdio.h>

int main(){

    for (int i = 20; i>=-10; i-=6){
        printf("%d ", i);
    }
    puts("");
    
    int i = 20;
    do {
        printf("%d ", i);
        i-=6;
    } while (i >= -10);
    puts("");

    for (int i = 22; i>=5; i-=4){
        printf("%d ", i);
    }
    puts("");

    return 0;
}