

#include <stdio.h>

int main(){
    //Get the uppercase Character
    char input;
    do {
        printf("Enter an uppercase character: ");
        scanf(" %c", &input);

    } while ( input < 'A' || input > 'Z');
   
    int num;
  
    do {
        printf("Enter a positive number: ");
        scanf(" %d", &num);
        

    } while (num <= 0);
   
    // Prints <number> of <input> on one line
    // A
    // 5
    //
    for(int i=1; i <=num;i++){
        printf("%c", input);
    }
    puts("");

    char input2;
    do {
        printf("Enter (*) or (#): ");
        scanf(" %c", &input2);

    } while (input2 != '*' && input2 != '#');

    for(int i = 1; i <=num;i++){
        printf("%c%c", input, input2);
    }
    puts("");
   
    return 0;

}
// Thing to do
// Scan a second character. It should be either * or # and NOTHING else
// Print the patern
// A 10 *
// A*A*A*A*A*A*A*A*A*A*