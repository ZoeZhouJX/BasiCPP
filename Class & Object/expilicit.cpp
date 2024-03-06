#include <iostream>

class Interger
{
public:
    explicit Interger(int a)
    {
        std::cout<<"带参构造\n";
        m_a = a;
    }
    ~Interger()
    {
        std::cout<<"无参构造\n";
    }
    int GetInterger()
    {
        return m_a;
    }
private:
    int m_a;
};

int main()
{
    Interger i(10);
    /* 构造函数的隐式转换：数值会被隐式构造成类的对象 */
    /* explicit 防止隐式转换 */
    i = 20; // i = Interger(20);
    std::cout<<i.GetInterger()<<std::endl;
    return 0;
}
