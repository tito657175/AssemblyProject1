//#include <stdio.h>
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
