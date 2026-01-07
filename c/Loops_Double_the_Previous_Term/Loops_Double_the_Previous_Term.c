#include <stdio.h>
#include<math.h>

int main() {
    int n;
    scanf("%d",&n);
    if (n<=0 || n>35)
    {
        return 0;
    }
    else 
    {
        printf("<1");
    for (int i=1;i<n;++i)
    {
        int sum=pow(2,i);
        printf(" %d",sum);
    }
    printf(">");
    }
    
    return 0;
}
