#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    void buildNumber(int a, int b, int c, int d)
    {
        
        int sum=a*1000+b*100+c*10+d; // storing four different integer values in a single variable 
        sum*=5;
        printf("The number is: %d",sum);
    }

  int main() 
  {
      
      int a,b,c,d;
      scanf("%d %d %d %d",&a,&b,&c,&d);
      buildNumber(a,b,c,d);
      
      return 0;
  }  
