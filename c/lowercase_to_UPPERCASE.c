#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
    {
        char lower_case;
        char upper_case;
        scanf("%c",&lower_case);
        upper_case=lower_case-32;
        printf("The uppercase of %c is %c",lower_case,upper_case);
        return 0;
    }
