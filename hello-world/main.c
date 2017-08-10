#include <stdio.h>
#include "MyFunction3.h"

int method1() {
    printf("%s\n", "method1");
    return 80;
}

int method2() {
    printf("%s\n", "method2");
    return 100;
}

void method3() {
    int num1 = 3;
    int num2 = 4;
    int result = mul(num1, num2);
    printf("%d*%d=%d", num1, num2, result);
}

int main() {
    printf("Hello, World!\n");
    printf("method1+method2=%d\n", method1() + method2());
    method3();
    return 0;
}
