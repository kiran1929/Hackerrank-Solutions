#include <stdio.h>

int main() {
    int income;
    float tax = 0;
    scanf("%d", &income);
    if (income < 0) {
        printf("INVALID");
        return 0;
    }
    if(income>250000&&income<=500000){
        tax=(income-250000)*0.05;
    }
    else if(income>500000&&income<=1000000){
        tax=(250000*0.05)+(income-500000)*0.20;
    }
    else if(income>1000000) {
        tax =(250000*0.05)+(500000*0.20)+(income-1000000)*0.30;
    }
    else {
        tax = 0;
    }

    printf("%.2f", tax);
    return 0;
}
