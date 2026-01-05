#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i;
    scanf("%d",&n);
    if (n>1)
    {
        for (i=2;i<=sqrt(n);++i)
    {
        if(n%i==0)
        {
            printf("Composite");
            break;
        }
    }
        if(i>sqrt(n))
        {
            printf("Prime");
        }
    }
    else 
    {
        printf("None");
    }
    
    return 0;
}
