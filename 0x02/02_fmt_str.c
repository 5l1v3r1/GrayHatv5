#include <stdio.h>

/* 总宽度为5，小数点后保留两位 */
/* 总宽度为5，小数点后保留一位，宽度不足，空位补全 */
/* 总宽度为4，小数点后保留一位 */
/* 总宽度为4，小数点后保留两位，宽度不足，小数点后依旧保留 */

int main(void) {
    double x = 23.5644;
    printf("x的值是: %5.2f\n", x);
    printf("x的值是: %5.1f\n", x);
    printf("x的值是: %4.1f\n", x);
    printf("x的值是: %4.2f\n", x);
    return 0;
}

