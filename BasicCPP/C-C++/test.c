#include <stdio.h>

int main()
{
    /* 伪常量 */
    int a = 10;
    /* 常量指针：指针指向一个常量 */
    const int *p = &a;
    /* 指针常量：指针是一个常量 */
    int *const p2 = &a;
}