#include <iostream>

class Test
{
public:
    Test(int a, int b)
    {
        this->a = a;
        std::cout<<"构造:this:"<<this<<std::endl;
    }

    Test(const Test &t)
    {
        std::cout<<"拷贝构造"<<std::endl;
    }

    Test clone()
    {
        return *this;
    }

    static void show()
    {
        /* 静态函数不能使用this指针 */
        //this->a;
        std::cout<<"helloworld\n";
    }
private:
    int a;
    int b;
};


int main()
{
    Test t(1,2);
    std::cout<<"t address:"<<&t<<std::endl;

    t.clone().show();
    return 0;
}