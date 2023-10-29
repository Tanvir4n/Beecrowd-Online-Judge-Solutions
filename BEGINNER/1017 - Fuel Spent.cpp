#include <stdio.h>

int main(){

    double a, b, liters;

    scanf("%lf %lf", &a, &b);

    liters = (a * b)/12;

    printf("%.3lf\n", liters);

    return 0;

}
