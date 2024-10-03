// Rafael Macias
// October 2, 2024
// Project 1
// CMPSCI-122-77814
// Phase 3 Figure 2.13

#include <iostream>
//Variables
char letter;
int power2 = 8; //initial 2^3
int result = 0;

int main(){
    printf("Enter four total 1's and 0's followed by *: \n");
    scanf("%c", &letter);

    while(letter != '*'){
        if(letter == '1'){
            result = result+power2;
        }
        scanf("%c", &letter); //scans next char
        power2 = power2 / 2; //lower power number
    }
    printf("That is %d in Decimal\n", result);
    return 0;
}