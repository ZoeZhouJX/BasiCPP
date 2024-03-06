#include <iostream>

class Test
{
public:
    Test()
    {
        // p = new int;
        std::cout<<"构造函数\n";
    }

    Test(const Test&t)
    {
        std::cout<<"拷贝构造"<<std::endl;
        // p = new int;
        // *p = *t.p;
        // 就等于 p = new int(*t.p);
    }
    ~Test()
    {
        // delete p;
        std::cout<<"析构函数\n";
    }
private:
    // int *p;
};

#if 0
Test func(Test t)
{
    Test t;
    std::cout<<"----------\n"<<std::endl;
    return t;
}
#endif

#if 0
Test func()
{
    Test t;
    return t;
}
#elif 1
/* 无参构造 - 拷贝构造   性能差*/
Test& func()
{
    static Test t;
    return t;
}
#else
Test func(Test& t)
{
    return t;
}
#endif


int main()
{
#if 0
    Test t;
    /* 调用拷贝构造 浅拷贝问题 */
    Test t2 = t;
#endif


#if 0
    // Test(); //匿名对象:生命周期只有一行代码
#endif

#if 0
    /* 析构两次 */
    Test t;
    t = Test();

    // /* 析构一次 */
    // Test t = Test();
#endif

#if 0
    /* 析构一次 */
    Test t = func();
#endif

#if 0
    Test t;
    Test t2 = func(t);
#endif
    return 0;
}