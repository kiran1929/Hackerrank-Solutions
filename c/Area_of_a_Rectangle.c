#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int area(int length, int width)
     {
         return length*width;
     }

int main() {
    int length_input,width_input;
    scanf("%d %d",&length_input,&width_input);
    int area_of_rectangle=area(length_input,width_input);
    printf("The area is: %d units",area_of_rectangle);
    return 0;
}
