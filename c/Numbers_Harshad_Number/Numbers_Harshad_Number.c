#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int split(int n){
        int first, second, third, fourth;
        fourth = n % 10;
        third  = (n / 10) % 10;
        second = (n / 100) % 10;    
        first  = n / 1000; 
        int sum=first + second + third + fourth;
        return sum;
    }

int main() {
    int n;
    scanf("%d",&n);
    int harshad = split(n);
    if (n%harshad==0)
    {
        printf("%d is a harshad number",n);
    }
    else 
    {
        printf("%d is not a harshad number",n);
    }
    return 0;
}
