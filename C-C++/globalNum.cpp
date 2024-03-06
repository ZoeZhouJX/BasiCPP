#include <iostream>

int a = 10;

int main()
{
    int a = 20;
    /* ::a代表这个a的作用域是全局的 */
    std::cout<<::a<<std::endl;
    std::cout<<a<<std::endl;
    return 0;
}