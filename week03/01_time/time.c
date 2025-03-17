/*
 The program converts the given number of seconds into HMS

  65 seconds -> 0 hours 1 minute 5 seconds
*/


#include <stdio.h>
int main() {
    int seconds = 0;
    int minutes = 0;
  
    // Get seconds from the input
    puts("Enter the number of seconds: ");
    scanf("%d", &seconds);
    minutes = seconds / 60;
    int remaining_seconds = seconds % 60;
    int hours = minutes / 60;
    int remaining_mins = minutes % 60;
    printf("%d seconds is %d hours %d minutes and %d seconds", seconds, hours, remaining_mins, remaining_seconds);

    
    return 0;
}