#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    scanf("%d",&i);
    int value=n|(1<<i);
    printf("%d",value); 
    return 0;
}
