/*
 Working with functions

  Format of a function

  <return type> <function_name>(<function argument(s)>) {
    Code of the function
  }

*/


#include <stdio.h>


// Void types DO NOT return values and DOES NOT take any arguments
// Function definition
void print_course(void){
    printf("You are in COP%d\n", 2271);
}

void draw_circle(){
    // printf("\t\t*\n");
    // printf("\t*\t\t*\n");
    // printf("*\t\t\t\t*\n");
    // printf("*\t\t\t\t*\n");
    // printf("*\t\t\t\t*\n");
    // printf("\t*\t\t*\n");
    // printf("\t\t*\n");

    // printf("    Λ\n   / \\\n  /   \\\n /     \\\n/       \\\n\\       /\n \\     /\n  \\   /\n   \\ /\n    V\n");

    puts("   *\n*     *\n *   *");
}


void two(){
    printf("two\n"); // Can use puts or printf
}



void draw_line(){
    puts("-------");
}

void draw_intersection(){
    puts("   Λ\n  / \\\n /   \\");

}

void draw_triangle() {
    draw_intersection();
    draw_line();
}
void draw_stickfigure(){
    draw_circle();
    draw_triangle();
    draw_intersection();
}

int main(){
    // Perform a function call
    // print_course();
    // printf("starting now: \n");
    one_three();
    // printf("done!\n");
   //  draw_stickfigure();
    return 0;
}

void one_three(){
    printf("one\n");
    two();
    printf("three\n");
}


// Functions get named in camel case
// variables get named snake case