//
// Created by admin on 2021/11/28.
//

#include "DMaximumProfit.h"
#include "iostream"

using namespace std;

static const int MAX = 200000;

int DMaximumProfit::main() {
    int R[MAX];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> R[i];
    }
    int maxv;
    int minv = R[0];
    for (int i = 1; i < n; ++i) {
        if (i == 1) {
            maxv = R[i] - minv;
        } else {
            maxv = max(maxv, R[i] - minv);
        }
        minv = min(minv, R[i]);
    }
    cout << maxv << endl;
    return 0;
}