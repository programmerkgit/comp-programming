//
// Created by admin on 2021/12/06.
//

#include "BottomUpCutRod.h"
#include <stdio.h>
#include <algorithm>    // std::max

int MAX = 1000000;
using namespace std;

int BottomUpCutRod::main() {
    int prices[10] = {1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    int n;
    scanf("%d", &n);
    int r[n];
    for (int l = 0; l <= n; ++l) {
        int max_v = 0;
        for (int cut = 1; cut <= min(l, 10); ++cut) {
            max_v = max(max_v, prices[cut -1] + r[l - cut]);
        }
        r[l] = max_v;
    }
    printf("%d", r[n]);
}
