#include <stdio.h>

int main(){
    int n,i,find=-1;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d",&target);

    for (i = 0; i < n; i++){
        if (arr[i] == target) {
            find=i;
        }
    }
    printf("%d",find);

    return 0;
}
