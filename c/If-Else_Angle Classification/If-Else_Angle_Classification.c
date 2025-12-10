#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;
    scanf("%d",&x);
    if (x==0)
    {
        printf("Acute Angle");
        return 0;
    }
    x%=360;
    
    if (x<90 && x>0)
    {
        printf("Acute Angle");
    }
    else if(x==90)
    {
        printf("Right Angle");
    }
    else if (x>90 && x<180)
    {
        printf("Obtuse Angle");
    }
    else if(x==180)
    {
        printf("Straight Angle");
    }
    else if(x>180 && x<360)
    {
        printf("Reflex Angle");
    }
    else if (x==0){
        printf("Full Rotation");
    }
    else
    {
        printf("Acute Angle");
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
