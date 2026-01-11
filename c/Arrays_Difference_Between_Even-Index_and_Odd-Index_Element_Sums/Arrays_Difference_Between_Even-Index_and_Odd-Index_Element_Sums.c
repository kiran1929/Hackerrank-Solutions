#include <stdio.h>

int main(){
    int n;
    long long difference=0,even = 0, odd = 0;

    scanf("%d", &n);

    long long arr[n];

    for (int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        if (i % 2 == 0) {
            even+=arr[i];
        } else {
            odd+=arr[i];
        }
    }
    difference =even - odd;
    printf("%lld",difference);
    

    return 0;
}
