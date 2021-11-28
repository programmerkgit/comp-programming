//
// Created by keishi kubo on 2021/11/29.
//

#include <cstdio>
#include <algorithm>
#include "CSwappingTwoNumbers.h"

using namespace std;

int CSwappingTwoNumbers::main() {
    for (int i = 0; i < 3000; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) {
            return 0;
        }
        printf("%d %d\n", std::min(a, b), std::max(a, b));
    }
    return 0;
}
