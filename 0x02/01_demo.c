#include <stdio.h>
#include <stdlib.h>
/* exit函数在stdlib.h中定义，printf在stdio.h中定义 */

int foo() {
    return 8;
}

int main(void) {
    int val_x;
    val_x = foo();
    printf("值返回为: %d\n", val_x);
    exit(0);
}

