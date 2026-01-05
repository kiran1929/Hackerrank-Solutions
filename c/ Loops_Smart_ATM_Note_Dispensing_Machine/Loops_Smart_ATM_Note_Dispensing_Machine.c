#include <stdio.h>

int main() {
    int a, five, two, one;
    scanf("%d", &a);

    if (a <= 0 || a % 100 != 0) {
        printf("Invalid amount");
        return 0;
    }

    five=a/500;
    a%=500;

    two=a/200;
    a%=200;

    one=a/100;

    printf("500-rupee notes: %d\n", five);
    printf("200-rupee notes: %d\n", two);
    printf("100-rupee notes: %d\n", one);

    return 0;
}
