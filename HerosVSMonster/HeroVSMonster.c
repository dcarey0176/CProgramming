

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>



void printYouWin(void);
void printYouLose(void);
int heroAttacks(int atkBonus);
int monsterAttacks(void);
void displayHealth(int heroHealth, int monsterHealth);
void battle(void);
void battleBegins();

// Note * 
// For rand() to get a range from -2-5 do rand(5-(-2) + 1) -2 
// Find shifting value first then subtract the shifting value and add one where the shifting value is the minimum

// 7-33
// rand() % 27 + 7

int main(){
    int seed = 0;
    printf("Enter a seed: ");
    scanf("%d", &seed);
    puts("");
    srand(seed);
    battle();

    return 0;
}

void printYouWin(){
    printf("🏆 Congratulations! You defeated the monster! 🏆\n");
}

void printYouLose(){
    printf("💀 Game Over! The monster has defeated you! 💀\n");
}

int heroAttacks(int atkBonus){
    int attack = (rand() % 5 + 1);
    return attack + atkBonus;
}

int monsterAttacks(void){
    int attack =rand() % 6 + 1;
    return attack;
}

void displayHealth(int heroHealth, int monsterHealth){
    printf("🔥 Hero Health: %d | 👹 Monster Health: %d\n", heroHealth, monsterHealth);
}

void battle(void){
    int heroHealth = 20;
    int monsterHealth = 20;
    int heroDMG = 0;
    int monsterDMG = 0;
    battleBegins();
    puts("\n");
    
    while (heroHealth > 0 && monsterHealth > 0){
        displayHealth(heroHealth, monsterHealth);
        puts("");
        heroDMG = heroAttacks(rand()%3);
        monsterDMG = monsterAttacks();
        printf("👊 Hero attacks with %d damage!\n", heroDMG);
        monsterHealth -= heroDMG;
        if (monsterHealth > 0){
            heroHealth -= monsterDMG;
            printf("👹 Monster attacks with %d damage!\n\n", monsterDMG);
        }
    }
    displayHealth(heroHealth, monsterHealth);
    puts("");
    if (heroHealth <= 0 && monsterHealth > heroHealth){
        printYouLose();
    }
    else{
        printYouWin();
    }
}

void battleBegins(){
    printf("⚔️  The battle begins! ⚔️");
}