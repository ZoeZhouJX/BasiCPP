#include <iostream>
using namespace std;
#include <set>

int main()
{
    set<int> myset;

    /* 插入数据 */
    /* 集合的特性之一：去重 */
    myset.insert(10);
    myset.insert(10);
    myset.insert(20);
    myset.insert(20);
    myset.insert(30);
    myset.insert(30);

    /* 集合的大小 */
    size_t size = myset.size();

    printf("size:%ld\n", size);

    /* 去重成功 */
    /* count()函数 判断元素是否在集合中 */
    size_t cnt = myset.count(10);
    printf("cnt:%ld\n", cnt);

    cnt = myset.count(100);
    printf("cnt:%ld\n", cnt);

    return 0;
}