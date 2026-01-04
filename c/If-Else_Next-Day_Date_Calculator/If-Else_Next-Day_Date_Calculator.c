#include <stdio.h>

int main() {
    int d,m,y;
    scanf("%d %d %d",&d,&m,&y);

    if (m == 2) {
        if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
            if (d < 29) {
                printf("%02d-%02d-%04d", d + 1, m, y);
            } else {
                printf("01-03-%d", y);
            }
        } else {
            if (d < 28) {
                printf("%02d-%02d-%04d", d + 1, m, y);
            } else {
                printf("01-03-%d", y);
            }
        }
    }

    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d < 30) {
            printf("%02d-%02d-%04d", d + 1, m, y);
        } else {
            printf("01-%02d-%d", m + 1, y);
        }
    }

    else {
        if (d < 31) {
            printf("%02d-%02d-%04d", d + 1, m, y);
        } else {
            if (m < 12) {
                printf("01-%02d-%04d", m + 1, y);
            } else {
                printf("01-01-%d", y + 1);
            }
        }
    }

    return 0;
}
