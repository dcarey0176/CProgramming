#include <stdio.h>

void coding();
void sum(int n);

int main(void) {
    // coding();
    // int num;
    // puts("Enter a number to find the sum of numbers between");
    // scanf("%d", &num);
    // sum(num);
   

    int x = 4, y = 0, z = 0, k = 2;
    y += x++ + 1;
    z -= ++y +2;
    k *= --z;
    printf("%dx %dy %dz %dk", x,y,z,k);
}


void coding(){
    int i = 1;
    while (i <=10){
        puts("I love coding");

        i++;
    }
}

void sum(int n){
    int i = 1;
    int sum = 0;
     while (i <=n){
        sum += i;
        i++;
        }
    printf("%d is the sum of numbers from 1-%d\n", sum, n);
}