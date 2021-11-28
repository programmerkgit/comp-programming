//
// Created by keishi kubo on 2021/11/28.
//

#include "DWatch.h"
#include "iostream"
// scanf stdio.h
#include "stdio.h"

int DWatch::main() {
    int n;
    std::cin >> n;
    int h = n / 60 / 60;
    int m = (n % (60 * 60)) / 60;
    int s = n % 60;
    std::cout << h << ":" << m << ":" << s << std::endl;
    return 0;
}

int DWatch::main2() {
    int S;
    /* scanf("%d", &S) */
    scanf("%d", &S);
    /* prrintf("%d:%d:%d", 1, 2, 3) */
    printf("%d:%d:%d\n", S / 3600, (S % 3600) / 60, S % 60);
    // 122 / 60 return 1
    return 0;
}

