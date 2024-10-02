// Rafael Macias
// October 2, 2024
// Project 1
// CMPSCI-122-77814
// Figure 2.6: Phase 3

#include <iostream>

int main(){
    int first;
    int second;
    int divide;
    int remainder;

    //Instructions and user intput collection
    printf("\nThis program will covert the first integer to base of the second integer.\nEnter The First Integer: \n");
    scanf("%d", &first);
    printf("Enter The Second Integer: \n");
    scanf("%d", &second);
    printf("\n"); //Added to make things easier to read

    while(first > 0){
        remainder = (first % second);
        printf("%d\n",remainder);
        first = first/second;
    }
    
    return 0;
}
