//
// Created by keishi kubo on 2021/11/28.
//

#include <cstdio>
#include "ASmallLargeequal.h"

int ASmallLargeequal::main() {
    int a, b;
    // scanf(%d %d, &a, &b)
    scanf("%d %d", &a, &b);
    if (a > b) printf("a > b\n"); // always needs semi-colon;
    else if (a < b) printf("a < b\n");
    else printf("a == b\n");
    return 0;
}