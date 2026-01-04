#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double d, r, r1, r2, real_part, img_part;

    scanf("%lf %lf %lf", &a, &b, &c);

    d = (b * b) - (4.0 * a * c);

    if (d > 0.0) {
        r1 = (-b + sqrt(d)) / (2.0 * a);
        r2  = (-b - sqrt(d)) / (2.0 * a);

        printf("Roots: %.2f, %.2f\n", r1, r2);
        printf("Type: Real and Distinct");
    }
    else if (d == 0.0) {
        r = -b / (2.0 * a);

        if (b == 0 || c == 0) {
            printf("Roots: %.2f, %.2f\n", -r, -r);
            printf("Type: Real and Equal");
        } else {
            printf("Roots: %.2f, %.2f\n", r, r);
            printf("Type: Real and Equal");
        }
    }
    else {
        real_part = -b / (2.0 * a);
        img_part  = sqrt(-d) / (2.0 * a);

        printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n",
               real_part, img_part, real_part, img_part);
        printf("Type: Complex");
    }

    return 0;
}
