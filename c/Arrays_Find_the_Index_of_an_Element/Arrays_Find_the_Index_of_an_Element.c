#include <stdio.h>

int main(){
    int n,i;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d",&target);

    for (i = 0; i < n; i++){
        if (arr[i] == target) {
            printf("%d",i);
            break;
        }
    }
    if (i==n)
    {
        printf("-1");
    }

    // printf("%d %d",even,odd);

    return 0;
}
