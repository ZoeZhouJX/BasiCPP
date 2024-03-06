#include <iostream>

int main()
{
#if 1
    int a = 100;
    int b = 90;
    (a > b ? b : a) += 99;
    std::cout<<b<<std::endl;
#endif

#if 1
    const int a = 10;
    int *p = (int *)&a;
    *p = 20;
    std::cout<<a<<std::endl;
    std::cout<<*p<<std::endl;
    printf("&a : %x  p:%x\n", &a, p);
#endif
    return 0;
}