// Rafael Macias
// October 2, 2024
// Project 1
// CMPSCI-122-77814
// Phase 3 Figure 2.12

#include <iostream>

int main() {
    int guess;
    printf("Pick a number 0 ... 15: \n");
    scanf("%d", &guess);

    switch (guess) {
        case 0: printf("%d decimal is 0 in Hex\n", guess); break;
        case 1: printf("%d decimal is 1 in Hex\n", guess); break;
        case 2: printf("%d decimal is 2 in Hex\n", guess); break;
        case 3: printf("%d decimal is 3 in Hex\n", guess); break;
        case 4: printf("%d decimal is 4 in Hex\n", guess); break;
        case 5: printf("%d decimal is 5 in Hex\n", guess); break;
        case 6: printf("%d decimal is 6 in Hex\n", guess); break;
        case 7: printf("%d decimal is 7 in Hex\n", guess); break;
        case 8: printf("%d decimal is 8 in Hex\n", guess); break;
        case 9: printf("%d decimal is 9 in Hex\n", guess); break;
        case 10: printf("%d decimal is A in Hex\n", guess); break;
        case 11: printf("%d decimal is B in Hex\n", guess); break;
        case 12: printf("%d decimal is C in Hex\n", guess); break;
        case 13: printf("%d decimal is D in Hex\n", guess); break;
        case 14: printf("%d decimal is E in Hex\n", guess); break;
        case 15: printf("%d decimal is F in Hex\n", guess);
    }
    return 0;
}