#include <iostream>
#include <cstring>

// int add(int a, int b, int c = 0, int d);

// int add(int a, int b, int c)
// {
//     return a + b + c;
// }

bool func(int a, char *errorMsg = NULL)
{
    if(errorMsg != NULL)
    {
        strcpy(errorMsg, "connect error!\n");
    }
    return false;
}

/* 占位参数 */
int add(int a, int b, int)
{
    return a + b;
}

int main()
{
    // std::cout<<add(10, 20)<<std::endl;


    // char msg[1024] = {0};
    // if(func(1, msg) == false)
    // {
    //     std::cout<<msg<<std::endl;
    // }


    // func(1);


    add(1, 2, 3);

    return 0;
}