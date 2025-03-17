#include <stdio.h>

void fToC(int *lakeland, int *stevensville, int *easton);
int enterTemp();

int main(){
    int lakeland = 0;
    int stevensville = 0;
    int easton = 0;
    lakeland = enterTemp();
    stevensville = enterTemp();
    easton = enterTemp();
    printf("Lakeland: %dF, Stevensville: %dF, Easton: %dF\n", lakeland, stevensville, easton);
    fToC(&lakeland, &stevensville, &easton);
    printf("Lakeland: %dC, Stevensville: %dC, Easton: %dC\n", lakeland, stevensville, easton);

    return 0;
}
// convert entered variable to celcius

void fToC(int *lakeland, int *stevensville, int *easton){
     *lakeland =(*lakeland - 32) * 5/9;
     *stevensville =(*stevensville - 32) * 5/9;
     *easton =(*easton - 32) * 5/9;
}

int enterTemp(){
    int t = 0;
    printf("Enter a Temperature: ");
    scanf("%d", &t);
    return t;
}