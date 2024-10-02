//#include <stdio.h>
#include <iostream>

int main(){
    const int bonus = 10;
    int exam1;
    int exam2;
    int score;
    scanf("%d %d", &exam1, &exam2);
    score = (exam1 + exam2) /2 + bonus;
    printf("score = %d\n", score);
    return 0;
}