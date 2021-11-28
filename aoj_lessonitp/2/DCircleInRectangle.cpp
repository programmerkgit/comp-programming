//
// Created by keishi kubo on 2021/11/29.
//

#include <cstdio>
#include "DCircleInRectangle.h"

int DCircleInRectangle::main() {
    int W, H, x, y, r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
    if (0 <= x - r && 0 <= y - r && W >= x + r && H >= y + r) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
