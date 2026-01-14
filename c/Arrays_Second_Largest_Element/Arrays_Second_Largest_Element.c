#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    long long first = LLONG_MIN;
    long long second = LLONG_MIN;
    for(int i = 0; i < n; i++) {
        if((long long)arr[i] > first) {
            second = first;
            first = arr[i];
        } else if((long long)arr[i] < first && (long long)arr[i] > second) {
            second = arr[i];
        }
    }
    return second == LLONG_MIN ? -1 : second;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}
