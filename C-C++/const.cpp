#include <iostream>
#if 0
namespace A
{
    #define size 10
}

namespace B
{
    #define size 20
}
#endif

#if 1
namespace A
{
    const int size = 10;
}

namespace B
{
    const int size = 20;
}
#endif
int main()
{
    std::cout<<A::size<<std::endl;
    return 0;
}