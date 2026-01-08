#include <stdio.h>

int main() {
    int year,month,invalid=0;

    scanf("%d",&month);
    scanf("%d",&year);

    

    if (month<1||month>12) {
        printf("Invalid Month\n");
        invalid=1;
    }

    if (year<1) {
        printf("Invalid Year");
        invalid=1;
    }
    if (invalid)
        return 0;

    if (month==2) {
        if ((year%400==0)||(year%4==0 && year%100!=0))
            printf("29");
        else
            printf("28");
    }
    else if (month==4||month==6||month==9||month==11) {
        printf("30");
    }
    else {
        printf("31");
    }

    return 0;
}
