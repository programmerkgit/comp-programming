//
// Created by admin on 2021/12/05.
//

#include <cstdio>
#include <algorithm>
#include <stdio.h>
#include "DMinMaxSum.h"
using namespace std;

int mainminmax() {
    int n;
    scanf("%d", &n);
    int maxn = -1000001;
    int minn = 1000001;
    long long int sum = 0;
    for (int i = 0; i < n; ++i) {
        int v;
        scanf("%d", &v);
        maxn = max(maxn, v);
        minn = min(minn, v);
        sum += v;
    }
    printf("%d %d %lld\n", minn, maxn, sum);
    return 0;
}