// Rafael Macias
// October 2, 2024
// Project 1
// CMPSCI-122-77814
// Phase 2 Figure 2.10


#include <iostream>

int main(){
    //All variable declarations
    const int base2 = 2;
    const int base3 = 3;
    const int base8 = 8;
    const int base10 = 10;
    const int base16 = 16;
    int num;


    //Collect user input base int
    printf("Enter a number base 2, 3, 8, 10, or 16: \n");
    scanf("%d", &num);

    if(num==base2 || num==base3 || num==base8 || num==base10 || num==base16){
        switch (num) {
            case 2: printf("Binary 0..1"); break;
            case 3: printf("Tertiary 0..2"); break;
            case 8: printf("Octal 0..7"); break;
            case 10: printf("Decimal 0..9"); break;
            case 16: printf("Hexidecimal 0..F");
        }
    } else {
        printf("You did not enter a base integer 2, 3, 8, 10, or 16.\nThis program will now self-destruct.\n<Insert that code later.>\n<Pending completion of that class lecture.>");
    }
    printf("\n");

    return 0;
}
