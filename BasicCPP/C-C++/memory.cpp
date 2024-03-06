#include <iostream>
#include <cstdlib>
#include <cstring>

int main()
{
#if 0
    char *str = (char *)malloc(sizeof(char) * 10);
    if(str == NULL)
    {
        return -1;
    }
    strcpy(str, "hello");
    std::cout<<str<<std::endl;
    free(str);
#endif

#if 1
    char **str = (char **)malloc(sizeof(char*) * 3);
    if (str == NULL)
    {
        return -1;
    }
    for (int idx = 0; idx < 3; idx++)
    {
        str[idx] = (char *)malloc(sizeof(char) * 10);
        if (str[idx] == NULL)
        {
            std::cout<<"malloc error!\n";
            return -1;
        }
        strcpy(str[idx], "hello");
    }
    for (int idx = 0; idx < 3; idx++)
    {
        std::cout<<str[idx]<<std::endl;
    }
    for (int idx = 0; idx < 3; idx++)
    {
        free(str[idx]);
    }
    free(str);
#endif

    return 0;
}

int main()
{
#if 0
    char *s = (char *)malloc(sizeof(char) * 10);
    char *s = new char[10];
    /* 1 不需要计算内存的大小 */
    /* 2 不需要对指针进行转换 */
    /* 3 不需要判断指针是否为空：抛出异常，终止程序 */
    strcpy(s, "hello");
    std::cout<<s<<std::endl;

    //释放数组
    delete []s;

    int *a = new int(10); //小括号是赋值的，[]申请数组
    std::cout<<*a<<std::endl;

    delete a;
#endif

#if 1
    char **s = new char*[3];
    for (int idx = 0; idx < 3; idx++)
    {
        s[idx] = new char[10];
        strcpy(s[idx], "hello");
    }
    for (int idx = 0; idx < 3; idx++)
    {
        std::cout<<s[idx]<<std::endl;
    }
    for (int idx = 0; idx < 3; idx++)
    {
        delete []s[idx];
    }
    delete s;
#endif
    return 0;

}