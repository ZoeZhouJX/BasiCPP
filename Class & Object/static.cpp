#include <iostream>

#if 0
class Test
{
public:
    static int c;
    int a;
};

/* 静态成员变量的初始化 */
#if 0
int Test::c = 10;
#endif
int Test::c = 0;

int main()
{
#if 0
    std::cout<<Test::c<<std::endl;
#endif
    Test t1;
    t1.c = 10;
    Test t2;
    std::cout<<t2.c<<std::endl;
    return 0;
}
#endif

#if 1
class Test
{
public:
    Test()
    {
        count++;
        std::cout<<"构造函数\n";
    }
    ~Test()
    {
        count--;
        std::cout<<"析构函数\n";
    }

#if 0
    void func()
    {
        std::cout<<"helloworld"<<std::endl;
    }
#else
    /* 静态成员函数 */
    // static void func()
    // {
    //     std::cout << "helloworld" << std::endl;
    // }
    static void func();
#endif
public:
    static int count;
    int a;
};

/* 关键字只有在声明的时候而不是在定义的时候 */
void Test::func()
{
    count++;
    std::cout<<"helloworld"<<std::endl;
}

/* 静态成员变量的初始化 */
int Test::count = 0;


int main()
{
#if 0
    /* 内存泄漏检查器 */
    Test *t1 = new Test();
    Test *t2 = new Test();

    delete t1;
    delete t2;
    std::cout<<Test::count<<std::endl;
#endif

#if 0
    Test t;
    t.func();
#else
    Test::func();
#endif
    return 0;
}
#endif