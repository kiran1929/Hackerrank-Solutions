#include <stdio.h>

int main() {
    double initial_amount;
    int n;
    
    scanf("%lf",&initial_amount);
    scanf("%d",&n);
    double amount=initial_amount;
    double min_amount=initial_amount;
    for (int i=1;i<=n;++i)
    {
        if ( amount < initial_amount * 0.4)
        {
            printf("Stopped early after %d days: %.2lf\n",(i-1),amount);
            printf("Minimum amount held by Bhaskar: %.2lf\n",amount);
            printf("Better Luck Next Time!");
            return 0;
        }
        if ( i % 2==0 && i % 3==0)
        {
            amount+=amount * 0.7; 
            i+=6;
            continue;
        }
        else if ( i %3==0 )
        {
            amount-=0.2*amount;
        }
        else if( i %2==0 )
        {
            amount-=0.125*amount;
        }
        else 
        {
            amount-=amount*0.1;
        }
        if (amount < min_amount )
        {
            min_amount=amount;
        }
    }
    printf("After %d days: %.2lf\n",n,amount);
    printf("Minimum amount held by Bhaskar: %.2lf\n",min_amount);
    if (amount > (initial_amount * 0.70))
    {
        printf("Lucky Bhaskar");
    }
    else 
    {
        printf("Better Luck Next Time!");
    }
    return 0;
}
