//
// Created by admin on 2021/12/05.
//

#include <cstdio>
#include <math.h>

int circle() {
    double r;
    scanf("%lf", &r);
    printf("%lf %lf\n", r * r * M_PI, 2 * r * M_PI);
}