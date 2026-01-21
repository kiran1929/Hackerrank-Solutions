#include <stdio.h>

int main(){
    int n,i,find=0;
    long long sum=0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    double avg=(double)sum/n;
    
    for (i = 0; i < n; i++){
        if (arr[i] > avg) 
        {
            ++find;
        }
    }
    printf("%d",find);

    return 0;
}
