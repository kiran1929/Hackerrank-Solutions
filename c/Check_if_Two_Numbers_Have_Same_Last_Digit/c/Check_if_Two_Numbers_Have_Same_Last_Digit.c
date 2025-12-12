#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
    
    void check_for_lastdigit(int num1,int num2){
        
        int number1=num1/10;
        int product1=number1*10;
        int value1=num1-product1;
        
        int number2=num2/10;
        int product2=number2*10;
        int value2=num2-product2;
        
        if(value1==value2){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
int main() {

    int num1,num2;
    scanf("%d%d",&num1,&num2);
    check_for_lastdigit(num1,num2);  
    return 0;
}
