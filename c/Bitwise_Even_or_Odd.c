#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
    int value=n&1;
    if(value==0){
        printf("Even");
    }
    else
    {
        printf("Odd");
    }    
    return 0;
}
