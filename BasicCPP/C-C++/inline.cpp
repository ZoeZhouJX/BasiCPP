#include <iostream>

#if 0
int func(int a)
{
    return a + 1;
}

int main()
{
    std::cout<<func(10)<<std::endl;
    return 0;
}

#else

inline int func(int a)
{
    return a + 1;
}

int main()
{
    int a = 10;
    std::cout<<a+1<<std::endl;
    return 0;
}
#endif