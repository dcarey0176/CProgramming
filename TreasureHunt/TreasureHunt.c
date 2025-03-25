
#include <stdio.h>
#include <stdlib.h>

int getBet(void);
int getGuess(void);
int getBal(void);
void clearArray(int *arr, int size);
void shuffleArray(int *arr, int size);
void printArray(int *arr, int size);
void treasureHunt(int *arr, int size, int *balance, int bet, int player_guess);
#define SIZE 3

int main(){
    int treasure[SIZE] = {0, 0, 0};
    int seed = 0;
    printf("Enter the seed: ");
    scanf("%d", &seed);
    srand(seed);
    int balance = getBal();
    int bet = getBet();
    int player_guess = 0;
    treasureHunt(treasure, SIZE, &balance, bet, player_guess);
    return 0;

}

int getBet(void){
    int bet = 0;
    printf("Enter the amount you want to bet (0 to stop): ");
    scanf(" %d", &bet);
    while (bet < 0){
        printf("The bet should be positive. Try again.\n");
        printf("Enter the amount you want to bet (0 to stop): ");
        scanf(" %d", &bet);
    }
    return bet;
}

int getGuess(void){
    int guess = 0;
    printf("Guess the hole where the treasure is hidden...\n");
    scanf("%d", &guess);
    while(guess <= 0 || guess > SIZE){
        printf("There are %d holes. Try again.\n", SIZE);
        printf("Guess the hole where the treasure is hidden...\n");
        scanf(" %d", &guess);
    }
    return guess;
}

int getBal(void){
    int balance = 0;
    printf("----Enter your starting cash balance----: ");
    scanf(" %d", &balance);
    while(balance <= 0){
        printf("The balance should be positive. Try again.\n");
        printf("----Enter your starting cash balance----: ");
        scanf(" %d", &balance);
        puts("");
    }
    return balance;
}

void clearArray(int *arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] = 0;
    } 
}


void shuffleArray(int *arr, int size){
    int random = rand() % size;
    arr[random] = 1;
}


void treasureHunt(int *arr, int size, int *balance, int bet, int player_guess){
    while (bet != 0){
        clearArray(arr, SIZE);
        shuffleArray(arr, SIZE);
        while(bet > *balance){
            printf("Not enough money. Try again!\n");
            bet = getBet();
        }
            
        if (bet == 0){
            break;
        }
        puts("");
    
        int player_guess = getGuess();
        if (arr[player_guess-1] == 1){
            *balance += bet;
            printf("You found the treasure! The holes are as follows: %d %d %d\n", arr[0], arr[1], arr[2]);
            printf("Your cash balance is now = %d\n\n", *balance);
        }
        else{
            printf("No treasure! The holes are as follows: %d %d %d\n", arr[0], arr[1], arr[2]);
            *balance -= bet;
            printf("Your cash balance is now = %d\n\n", *balance);
        }
        if (*balance == 0){
            printf("Sorry you're out of cash. Better luck next time! Thank you for playing.\n");
            exit(0);
        }
        bet = getBet();
        
    }
    printf("Thanks for playing\n");

}