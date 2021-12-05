//
// Created by admin on 2021/12/03.
//


#include <cstdio>

int main() {
    // sum of two number
    int a, b;
    double a_d, b_d;
    scanf("%d %d", &a, &b);
    a_d = static_cast<double>(a);
    b_d = static_cast<double >(b);
    printf("%d %d %.5f\n", a / b, a % b, a_d / b_d);
}