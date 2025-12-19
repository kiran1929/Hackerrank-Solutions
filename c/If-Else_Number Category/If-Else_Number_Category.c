#include <stdio.h>
#include <math.h>

int main() {
    int n,square;
    scanf("%d",&n);
    square=n*n;
    if ( (n%2==0 && n%3==0) && n%5!=0)
    {
        printf("A");
    }
    else if( (n > 20 &&
            (n == 2*3  || n == 2*5  || n == 2*7  || n == 2*11 ||
             n == 3*5  || n == 3*7  || n == 3*11 ||
             n == 5*7  || n == 5*11 ||
             n == 7*11))){
        printf("B");
    }
    else if(n %3==0 ^ n%7==0 && ( n > 10 && n < 99))
    {
        printf("C");
    }
    else
    {
        int sq = (int)sqrt(n);
        if (sq * sq == n && n < 200) {
            printf("D");
        }
        else
        {
            printf("E");
        }
    }
    
    
    return 0;
}
