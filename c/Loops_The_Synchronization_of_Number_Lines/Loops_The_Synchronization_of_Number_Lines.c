#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A,B,num;
    scanf("%d %d",&A,&B);
    if(A>B){
        num=A;
    }
    else{
        num=B;
    }
    for(int i=num;;i+=num){
        if(i%A==0&&i%B==0){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
