#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    void split(int n){
        int num1=n/100;
        int num2=n%100/10;
        int num3=n%10;
        printf("%d %d %d",num1,num2,num3);
    }

int main() {
    int number;
    scanf("%d",&number);
    split(number);
    
    return 0;
}
