//#include <stdio.h>
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