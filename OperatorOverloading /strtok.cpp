#include <iostream>
#include <cstring>

char *MyStrtok(char *source, const char *delim)
{
    static char *delimHeader;
    if (source == nullptr)
    {
        if (delimHeader == nullptr)
        {
            return nullptr;
        }
        source = delimHeader;
    }
    char *target = strstr(source, delim);
    if (target == nullptr)
    {
        delimHeader = nullptr;
        return source;
    }
    else
    {
        *target = '\0';
        delimHeader = target + strlen(delim);
        return source;
    }
}
int main()
{
    char str[] = "zhangsan,lisi,wangwu";
    char *s = strtok(str, ",");
    while (s != nullptr)
    {
        std::cout<<s<<std::endl;
        s = strtok(nullptr, ",");
    }

    return 0;
}