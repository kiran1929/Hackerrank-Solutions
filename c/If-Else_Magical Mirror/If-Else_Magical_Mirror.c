#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n<=0)
    {
        printf("The verdict for the number %d is: INVALID",n);
        return 0;
    }
    int num=0;
    if (n>10 && (n%2==0))
    {
        num+=1;
    }
    if (n>15 && (n%3==0))
    {
        num+=1;
    }
    if (n%7==0)
    {
        num+=1;
    }
    if (num==3)
    {
        printf("The verdict for the number %d is: SUPERNATURAL",n);
    }
    else if(num==2)
    {
        printf("The verdict for the number %d is: MIRACULOUS",n);
    }
    else if (num==1)
    {
        printf("The verdict for the number %d is: MAGICAL",n);
    }
    else 
    {
        printf("The verdict for the number %d is: NORMAL",n);
    }   
    return 0;
}
