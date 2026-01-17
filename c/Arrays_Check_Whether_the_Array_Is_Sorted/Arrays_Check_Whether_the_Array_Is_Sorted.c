#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long arr[n];

    for(int i = 0; i < n; i++)
        scanf("%lld", &arr[i]);

    if(n <= 1)
    {
        printf("Ascending");
        return 0;
    }

    int isAscending = 1;
    int isDescending = 1;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < arr[i - 1])
            isAscending = 0;

        if(arr[i] > arr[i - 1])
            isDescending = 0;
    }

    if(isAscending)
        printf("Ascending");
    else if(isDescending)
        printf("Descending");
    else
        printf("Not Sorted");

    return 0;
}
