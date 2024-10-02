// Rafael Macias
// October 2, 2024
// Project 1
// CMPSCI-122-77814
// Phase 2 Figure 2.13

#include <iostream>

char letter;

int main(){
    scanf("%c", &letter);
    while(letter != '*'){
        if(letter == ' '){
            printf("\n");
        }
        else {
            printf("%c", letter);
        }
        scanf("%c", &letter);
    }
    printf("\n");
    return 0;
}