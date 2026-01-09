#include <stdio.h>

int main()
{
    int n,count=0,num=1;
    scanf("%d", &n);

    while (count < n)
    {
        num++;
        int isPrime = 1;

        if (num < 2)
        {
            isPrime = 0;
        }
        else
        {
            for (int i = 2; i * i <= num; i++)
            {
                if (num % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime)
        {
            count++;
        }
    }
    printf("%d", num);
    return 0;
}
