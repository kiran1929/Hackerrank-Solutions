#include <stdio.h>

int main() {
    int d0, d1, d2, d3, d4, d5, d6, d7, d8, d9;
    scanf("%d %d %d %d %d %d %d %d %d %d", 
          &d0, &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9);
    int p1, p2, p3, r1, r2, r3;
    scanf("%d %d",&p1, &r1);
    scanf("%d %d",&p2, &r2);
    scanf("%d %d",&p3, &r3);
    
    if(p1==0) d0=(d0+r1)%10;
    else if(p1==1) d1=(d1+r1)%10;
    else if(p1==2) d2=(d2+r1)%10;
    else if(p1==3) d3=(d3+r1)%10;
    else if(p1==4) d4=(d4+r1)%10;
    else if(p1==5) d5=(d5+r1)%10;
    else if(p1==6) d6=(d6+r1)%10;
    else if(p1==7) d7=(d7+r1)%10;
    else if(p1==8) d8=(d8+r1)%10;
    else if(p1==9) d9=(d9+r1)%10;
    
    if(p2==0) d0=(d0+r1)%10;
    else if(p2==1) d1=(d1+r2)%10;
    else if(p2==2) d2=(d2+r2)%10;
    else if(p2==3) d3=(d3+r2)%10;
    else if(p2==4) d4=(d4+r2)%10;
    else if(p2==5) d5=(d5+r2)%10;
    else if(p2==6) d6=(d6+r2)%10;
    else if(p2==7) d7=(d7+r2)%10;
    else if(p2==8) d8=(d8+r2)%10;
    else if(p2==9) d9=(d9+r2)%10;
    
    if(p3==0) d0=(d0+r1)%10;
    else if(p3==1) d1=(d1+r3)%10;
    else if(p3==2) d2=(d2+r3)%10;
    else if(p3==3) d3=(d3+r3)%10;
    else if(p3==4) d4=(d4+r3)%10;
    else if(p3==5) d5=(d5+r3)%10;
    else if(p3==6) d6=(d6+r3)%10;
    else if(p3==7) d7=(d7+r3)%10;
    else if(p3==8) d8=(d8+r3)%10;
    else if(p3==9) d9=(d9+r3)%10;
    
    
    printf("%d %d %d %d %d %d %d %d %d %d\n",
           d0, d1, d2, d3, d4, d5, d6, d7, d8, d9);
    return 0;
}
