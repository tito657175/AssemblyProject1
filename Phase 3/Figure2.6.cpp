// Rafael Macias
// October 2, 2024
// Project 1
// CMPSCI-122-77814
// Figure 2.6: Phase 2

#include <iostream>

int main(){
    //const int bonus = 10;
    int int1;
    int int2;
    int divide;
    int remainder;
    //Ask for two ints from user
    printf("\nThis program will take two integers and divide them.\nEnter The First Integer: \n");
    scanf("%d", &int1);
    printf("Enter The Second Integer: \n");
    scanf("%d", &int2);

    divide = (int1 / int2);
    remainder = (int1 % int2);
    printf("Divide = %d  Remainder = %d\n", divide , remainder);
    return 0;
}
