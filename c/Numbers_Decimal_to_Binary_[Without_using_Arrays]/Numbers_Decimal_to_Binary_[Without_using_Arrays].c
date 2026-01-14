#include <stdio.h>

int main() {
    int n,temp=0,binary=0,place=1;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        int remainder=n%2;
        binary =binary+remainder*place;
        place =place*10;
        n=n/2;
    }
    printf("Binary equivalent of %d: %d",temp,binary);
    return 0;
}
