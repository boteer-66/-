#include<stdio.h>
#include"tools.h"
int main() {
    int num1 = 5, num2 = 10;
    int result = add(num1, num2);
    printf("%d + %d = %d\n", num1, num2, result);
    return 0;
}