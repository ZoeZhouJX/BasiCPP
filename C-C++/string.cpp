#include <iostream>
#include <string>

int main()
{
    /* 动态数组 */
    std::string s;
    s = "helloworld";
    std::string s1 = s + "world";
    std::cout<<s<<std::endl;
    std::cout<<s1.size()<<std::endl;
    std::cout<<s1.capacity()<<std::endl;

    if (s == s1)
    {
        std::cout<<"equal"<<std::endl;
    }
    else
    {
        std::cout<<"not equal"<<std::endl;
    }

    std::cout<<s.substr(1, 4)<<std::endl;

    std::cout<<s.find_first_of("ello")<<std::endl;

#if 0
    s += "asd";
    s.push_back('p');
    std::cout<<s<<std::endl;

    s = "nihao";
    std::cout<<s<<std::endl;
#endif
    return 0;
}