#include <stdio.h>

int main()
{
  int N;
  scanf("%d",&N);
  
  long long totalsum;
  totalsum = (long long)N*(N+1)/2;
  
  long long sum = 0;
  
  for(int i=0;i<N-1;i++)
  {
    int num;
    scanf("%d",&num);
    sum = sum + num;
  }
  
  long long missing;
  missing = totalsum - sum;
  
  printf("%lld",missing);

  return 0;
}
