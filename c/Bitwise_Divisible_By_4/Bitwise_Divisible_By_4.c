#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  long long n;
    scanf("%lld",&n);
    if(n<-12147483647LL||n>2147483647LL){
         
        printf("Out of Range");      
    }
    else{
         if(((n>>2)*4)-n==0){
            printf("Divisible");
        }
        else{
            printf("Not Divisible");
        }  
    }
    return 0;
}
