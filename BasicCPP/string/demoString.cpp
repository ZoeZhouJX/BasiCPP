#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
#if 0
    bool a = true;
    int len = sizeof(a);
    printf("len:%d\n", len);
    /* 布尔占一个字节 只有true：1 和 false：0  */
#endif

    string s = "hello world";

    printf("s:%s\n", s.c_str());
    printf("s:%s\n", s.c_str());

    return 0;
}