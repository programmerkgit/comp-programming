//
// Created by keishi kubo on 2021/11/29.
//

#include <cstdio>
#include "DHowManyDivisors.h"

int DHowManyDivisors::main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int count = 0;
    for (int i = a; i <= b; ++i) {
        if (c % i == 0) {
            count++;
        }
    }
    printf("%d\n", count);
}
