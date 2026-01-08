#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long a,b;
    scanf("%lld %lld",&a,&b);
    while (b!=0) {
        long long res=b;
        b=a%b;
        a=res;
    }
    printf("%lld", a);
    return 0;
}
