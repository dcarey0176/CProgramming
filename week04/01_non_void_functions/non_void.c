/*
    Practice with non void functions
*/

#include <stdio.h>

// Function prototype
int getFive(void); // Function name getFive returns and integer and takes no arguments

// Function prints the given value
// The function printCourse return nothing and takes in an integer
void printCourse(int course_number);

// Function that describes weather
void describeWeather(double temp);

// Function return kilometers for the given miles
double milesToKM(int miles);
// Function convert km to mi
double KMToMiles(int km);


int main(void){
    // int var;
    // var = getFive();
    // printf("The value of var is %d\n", var);
    // double temp;
    // printf("Enter a temperature: ");
    // scanf("%lf", &temp); // Takes in a double
    // describeWeather(temp);
    // printCourse(2271);
    double miles;
    printf("Enter amount of miles: ");
    scanf("%lf", &miles);
    printf("There are %0.1fkm in %0.0f miles\n",milesToKM(miles), miles);
     double km;
    printf("Enter amount of km: ");
    scanf("%lf", &km);
    printf("There are %0.1fmi in %0.0f km\n",KMToMiles(km), km);
    return 0;
}

// Function definition
int getFive(void){
    int five = 5;
    
    
    return five;
}


void printCourse(int course_number){
    printf("You are in COP%d\n", course_number);
}

void describeWeather(double temp){
    if (temp > 75.8){
        printf("The temperature is %.1f, it is hot\n", temp);
    }
    else if (temp > 65.2){
        printf("The temperature is %.1f, it is warm\n", temp);
    }
    else {
        printf("The temperature is %.1f, it is cold\n", temp);
    }
}

double milesToKM(int miles){
    return miles * 1.609;
}

// Convert km to mi
double KMToMiles(int km){
    return km / 1.609;
}