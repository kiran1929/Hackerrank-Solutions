#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);

    int value=num;
    int count=0;
    while (num>0) {
        int digit=num%10;
        if (value%digit==0) {
            count++;
        }
        num=num/10;
    }
    printf("%d",count);

    return 0;
}
