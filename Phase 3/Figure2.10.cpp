// Rafael Macias
// October 2, 2024
// Project 1
// CMPSCI-122-77814
// Phase 3 Figure 2.10

#include <iostream>

//Function to raise base to the needed power
void raiseToPower(int base){
    //All powers to 0 are 1
    printf("1 ");
    //Set initial conditions
    int result = base;

    for(int i=1;i<4;i++){ //loop 3 times
        result = result*base;
        printf("%d ", result);
    }
}

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
            case 2: raiseToPower(base2); break;
            case 3: raiseToPower(base3); break;
            case 8: raiseToPower(base8); break;
            case 10: raiseToPower(base10); break;
            case 16: raiseToPower(base16); 
        }
    } else {
        printf("You did not enter a base integer 2, 3, 8, 10, or 16.");
    }
    
    printf("\n");

    return 0;
}