//
// Created by admin on 2021/12/05.
//

#include <cstdio>
#include "CSimpleCalculator.h"

int CSimpleCalculator::main() {
    int a, b;
    char op;
    while (true) {
        scanf("%d %c %d", &a, &op, &b);
        if (op == '?') break;
        switch (op) {
            case '/':
                printf("%d\n", a / b);
                break;
            case '+':
                printf("%d\n", a + b);
                break;
            case '-':
                printf("%d\n", a - b);
                break;
            case '*':
                printf("%d\n", a * b);
                break;
            default:
                break;
        }
    }
}
