#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int temp = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < temp) {
            temp = a[i];
        }
    }

    int second = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > temp) {
            if (count == 0) {
                second = a[i];
                count = 1;
            } else if (a[i] < second) {
                second = a[i];
            }
        }
    }

    if (count == 1) {
        printf("%d", second);
    } else {
        printf("-1");
    }

    return 0;
}
