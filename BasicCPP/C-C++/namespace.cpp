#include <iostream>

namespace A
{
    void InsertTail()
    {
        std::cout<<"first"<<std::endl;
    }
    int a = 10;
    namespace B
    {
        int a = 30;
    }
}

namespace B
{ 
    void InsertTail()
    {
        std::cout<<"second"<<std::endl;
    }
    int a = 20;
}

int main()
{
#if 1
    A::InsertTail();
    B::InsertTail();

    std::cout<<A::a<<std::endl;
    std::cout<<B::a<<std::endl;
#endif

#if 1
    using namespace A;
    InsertTail();
    std::cout<<a<<std::endl;
#endif

#if 1
    std::cout<<A::B::a<<std::endl;
#endif
    return 0;
}