#include <stdio.h>

int main() {
    int len_1, len_2, len_3;
    scanf("%d %d %d", &len_1, &len_2, &len_3);

    if (len_1 + len_2 > len_3 && len_1 + len_3 > len_2 && len_2 + len_3 > len_1){

        printf("Lengths: [%d, %d, %d]\n", len_1, len_2, len_3);

        if (len_1 == len_2 && len_2 == len_3) {
            printf("Type: Equilateral\n");
            printf("All sides are of the same length.");
        }
        else if (len_1 == len_2 || len_1 == len_3 || len_2 == len_3){
            printf("Type: Isosceles\n");
            printf("Exactly two sides are equal.");
        }
        else{
            printf("Type: Scalene\n");
            printf("All sides are of different lengths.");
        }
    } else{
        printf("Lengths: [%d, %d, %d]\n", len_1, len_2, len_3);
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.");
    }

    return 0;
}
