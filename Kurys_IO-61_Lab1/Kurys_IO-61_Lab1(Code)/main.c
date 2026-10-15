#include <stdio.h>

int main() {
    double x, y;
    printf("Enter x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Error: Invalid input.\n");
        return 0;
    }


    if (x <= -41) {м

        y = (13.0 * x * x) / 11.0 - 6.0;
        printf("y(x) = %lf\n", y);
    } else {

        if (x > -21) {
            if (x <= 3) {

                y = -14.0 * x - 20.0;
                printf("y(x) = %lf\n", y);
            } else {

                if (x > 12) {

                    y = -14.0 * x - 20.0;
                    printf("y(x) = %lf\n", y);
                } else {

                    printf("Function is undefined for x = %lf\n", x);
                }
            }
        } else {

            printf("Function is undefined for x = %lf\n", x);
        }
    }

    return 0;
}
