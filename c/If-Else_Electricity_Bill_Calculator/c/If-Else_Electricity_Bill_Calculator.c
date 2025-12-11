#include <stdio.h>

int main() {
     float bill,units;
    scanf("%f",&units);
    if (units>=0){
        if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 300) {
        bill =(100*5)+(units-100)*7;
    }
    else {
        bill=(100*5)+(200*7)+(units-300)*10;
    }
        if (bill<=1200){
        bill =bill-(bill*0.10); // 10% discount
    }
        printf("The electricity bill is: %.2f.", bill);
    }
    else{
        printf("Invalid Input!");
    }  
    return 0;
}
