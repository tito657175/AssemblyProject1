// Rafael Macias
// October 2, 2024
// Project 1
// CMPSCI-122-77814
// Phase 3 Figure 2.12

#include <iostream>

int main() {
    int guess;
    printf("Pick a number 10..15: \n");
    scanf("%d", &guess);
    
    switch (guess) {
        case 10: printf("A\n"); break;
        case 11: printf("B\n"); break;
        case 12: printf("C\n"); break;
        case 13: printf("D\n"); break;
        case 14: printf("E\n"); break;
        case 15: printf("F\n");
    }
    return 0;
}