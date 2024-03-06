#include <iostream>
#include <string>
#include "StdMyString.h"

int main()
{
    // std::string str;
    // std::cout<<str.size()<<std::endl;
    // std::cout<<str.capacity()<<std::endl;

    // std::string str = "hello";

    // StdMyString s = "helloworld";
    // std::cout<<s<<std::endl;

    // StdMyString s2 = s + ",jack"; /* .jack 隐式转换 */
    // std::cout<<s2<<std::endl;

    // StdMyString s("helloworld");
    // StdMyString s1;
    // s1 = s;
    // std::cout<<s1<<std::endl;

    // StdMyString s("helloworld");
    // StdMyString s1;
    // StdMyString s2;
    // s2 = (s1 = s);
    // std::cout<<s2<<std::endl;

    // StdMyString s("helloworldworld");
    // StdMyString s2 = s - "world";
    // std::cout<<s2<<std::endl;

    // StdMyString s;
    // std::cin>>s;
    // std::cout<<s<<std::endl;

    // StdMyString s("helloworld");
    // s[1] = 'o';
    // std::cout<<s<<std::endl;

    // StdMyString s = "100";
    // int a = (int)s;
    // std::cout<<a<<std::endl;

    // StdMyString s = "10.2";
    // std::cout<<(double)s+1<<std::endl;

    // MyStringList list;
    // list += "zhangsan";
    // list += "lisi";
    // list += "wangwu";
    // std::cout<<list<<std::endl;

    // StdMyString s("zhangsan,lisi,wangwu");
    // MyStringList list = s.split(",");
    // std::cout<<list<<std::endl;

    // StdMyString s("zhangsan,lisi,lisi,wangwu");
    // MyStringList list = s.split(",");
    // list -= "lisi";
    // std::cout<<list<<std::endl;

    // StdMyString s("zhangsan,lisi,wangwu");
    // MyStringList list = s.split(",");
    // list[1] = "111";
    // std::cout<<list<<std::endl;

    std::cout<<StdMyString::Number(199)<<std::endl;

    return 0;
}