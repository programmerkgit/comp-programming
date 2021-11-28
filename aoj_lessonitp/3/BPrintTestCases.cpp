//
// Created by keishi kubo on 2021/11/29.
//

#include <cstdio>
#include "BPrintTestCases.h"

int BPrintTestCases::main() {

    for (int i = 1; i <= 10000; ++i) {
        int n;
        scanf("%d", &n);
        if (n == 0) {
            return 0;
        }
        printf("Case %d: %d\n", i, n);
    }
    return 0;
}
