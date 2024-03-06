#include <iostream>

int main()
{
    bool a = true;
    std::cout<<sizeof(a)<<std::endl;   // 1

    bool a = 200;
    std::cout<<a<<std::endl;  //1
    return 0;
}