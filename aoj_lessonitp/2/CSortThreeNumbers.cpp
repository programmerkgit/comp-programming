//
// Created by keishi kubo on 2021/11/29.
//

#include <cstdio>
#include "stdio.h"
#include "CSortThreeNumbers.h"
#include "algorithm"

int CSortThreeNumbers::main() {
    int l = 3;
    int array[l];
    for (int i = 0; i < 3; ++i) {
        scanf("%d", &array[i]);
    }
    for (int i = l - 1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            if (array[j] > array[j + 1]) std::swap(array[j], array[j + 1]);
        }
    }
    printf("%d %d %d\n", array[0], array[1], array[2]);
}
