#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int b[m];
    for (int i=0;i<n;++i)
    {
        scanf("%d",&b[i]);
    }
    if (n != m)
    {
        printf("Not Equal");
        return 0;
    }
    for (int i=0;i<n;++i)
        {
            if(a[i] != b[i])
            {
                printf("Not Equal");
                return 0;
            }
        }
    printf("Equal");
    return 0;
}
