#include <stdio.h>
#include <limits.h>

int fun_smallest(int arr[], int n, int k) 
{
    int prev_min = INT_MIN;
    int cur_min;
    int check_found;

    for (int i = 0; i < k; i++) 
    {
        cur_min = INT_MAX;
        check_found = 0;

        for (int i = 0; i < n; i++) 
        {
            if (arr[i] > prev_min && arr[i] < cur_min) 
            {
                cur_min = arr[i];
                check_found = 1;
            }
        }

        if (!check_found) 
        {
            return -1;
        }

        prev_min = cur_min;
    }

    return prev_min;
}

int main() 
{
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);
    printf("%d\n", fun_smallest(arr, n, k));

    return 0;
}
