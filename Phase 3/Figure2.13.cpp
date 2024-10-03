// Rafael Macias
// October 2, 2024
// Project 1
// CMPSCI-122-77814
// Phase 2 Figure 2.13

#include <iostream>

char letter;

int main(){
    printf("Enter Four total 1's and 0's followed by *: \n");
    scanf("%c", &letter);

    while(letter != '*'){
        if(letter == ' '){
            printf("\n");
        }
        else {
            printf("%c * power 2 = \n", letter);
        }
        scanf("%c", &letter); //scans next char
    }
    printf("\n");
    return 0;
}