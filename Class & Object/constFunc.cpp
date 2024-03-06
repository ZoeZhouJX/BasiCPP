#include <iostream>

class Test
{
public:
    /* 保护返回值 */
    Test(int a):a(a){}
    const int* func()
    {
        return &a;
    }
    /* 保护引用形参 */
    void func2(const int &a)
    {
        a++;
    }
    /* 该函数内不允许对成员变量做修改  保护成员变量 */
    void func3()const
    {
        a++;
    }
private:
    int a;
};


int main()
{
    Test t(10);
    const int *p = t.func();
    *p = 20;
    return 0;
}