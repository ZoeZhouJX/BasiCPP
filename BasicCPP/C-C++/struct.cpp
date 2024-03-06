#include <iostream>
#include <arpa/inet.h>

#if 1
struct student
{
    void SetA(int num)
    {
        a = num;
    }
    int a;
    int b;
};
#endif

#if 0
struct stdTcpServer
{
    int a;
    int b;
};

// typedef stdTcpServer TcpS;
using TcpS = stdTcpServer;

#endif

int main()
{
    student s;
    s.SetA(10);
    std::cout<<s.a<<std::endl;
    // TcpS s;
    s.a = 10;
    s.b = 20;
    return 0;
}