#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int low,high,n;
    scanf("%d %d %d",&n,&low,&high);
    if(n<=high && n>=low){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }  
    return 0;
}
