#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumLastDigits(int a, int b)
{
    int rem1,rem2;
    rem1=a%10;
    rem2=b%10;
    int sum=rem1+rem2;
    return sum;
        
}
int main() 
{

    int input_1,input_2;
    scanf("%d %d",&input_1,&input_2);
    int value=sumLastDigits(input_1,input_2);
    printf("The sum of last digits is: %d",value);
    return 0;
}
