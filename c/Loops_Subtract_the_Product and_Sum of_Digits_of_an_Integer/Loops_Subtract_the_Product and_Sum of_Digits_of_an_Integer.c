#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num,last=0,product=1,sum=0;
    scanf("%d",&num);
    
    
    while(num!=0)
    {
        last=num%10;
        product=product*last;
        sum=sum+last;
        num=num/10;
    }
    int res= product-sum;
    printf("%d",res);
    return 0;
}
