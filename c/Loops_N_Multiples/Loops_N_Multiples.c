#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i=1;i<=n;++i)
    {
        printf("%d ",i*m);
    }
    return 0;
}
