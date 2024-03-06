#include <iostream>

const short size = 10;
// int add(int a, int b)
// {
//     return a + b;
// }

// int add(int a, int b, int c)
// {
//     return a + b + c;
// }

// int add(int a, double b)
// {
//     return a + b;
// }

// double add(double a, double b)
// {
//     return a + b;
// }

void add(int a)
{
    std::cout<<"int :"<<a<<std::endl;
}

void add(short a)
{
    std::cout << "short :" << a << std::endl;
}

int main()
{
    // std::cout<<add(1, 2)<<std::endl;

    add(size);
    
    return 0;
}