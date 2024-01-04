#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
using namespace std;

#define BUFFERSIZE 20

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFERSIZE];
} Stu_info;

int main(int argc, char const *argv[])
{
#if 0
    vector<int> myvec;

    /* 插入数据 */
    myvec.push_back(5);

    /* 查询数组的元素大小 */
    int length =  myvec.size();
    int capacit = myvec.capacity();
    
    printf("length = %d\n", length);
    printf("capacit = %d\n", capacit);
#endif

#if 1
    Stu_info stu1, stu2, stu3;
    memset(&stu1, 0, sizeof(stu1));
    memset(&stu2, 0, sizeof(stu2));
    memset(&stu3, 0, sizeof(stu3));

    stu1.age = 10;
    strncpy(stu1.name, "zhangsan", strlen("zhangsan") + 1);
    stu1.sex = 'm';

    stu2.age = 20;
    strncpy(stu2.name, "lisi", strlen("lisi") + 1);
    stu2.sex = 'w';

    stu3.age = 30;
    strncpy(stu3.name, "wangwu", strlen("wangwu") + 1);
    stu3.sex = 'm';

    vector<Stu_info> myvec;

    myvec.push_back(stu1);
    myvec.push_back(stu2);
    myvec.push_back(stu3);

    Stu_info temp;

    for (int idx = 0; idx < myvec.size(); idx++)
    {
        temp = myvec.at(idx);
        printf("stu%d.age = %d  stu%d.sex = %c  stu%d.name = %s\n", idx, temp.age, idx, temp.sex, idx, temp.name);
    }

#endif
    return 0;
}