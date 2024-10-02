// Rafael Macias
// October 2, 2024
// Project 1
// CMPSCI-122-77814
// Phase 2 Figure 2.10


//#include <stdio.h>
#include <iostream>

int main(){
    const int limit = 100;
    int num;
    scanf("%d", &num);
    if (num >= limit) {
        printf("high\n");
    } else {
        printf("low\n");
    }
    return 0;
}