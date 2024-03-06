#include <iostream>
#include <cstdlib>

class Test
{
public:
    Test()
    {
        std::cout<<"构造函数\n";
    }
    ~Test()
    {
        std::cout<<"析构函数\n";
    }
};

int main()
{
    // Test *t = new Test();
    // std::cout<<"-------------\n";
    // Test *t1 = (Test*)malloc(sizeof(Test));

    // delete t;
    // free(t1);

    Test *t = new Test[10];
    delete []t;
    return 0;
}