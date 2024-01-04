#include <iostream>
using namespace std;
#include <queue>
#include <string.h>

#define BUFFER_SIZE 10

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
} Stu_info;

int main(int argc, char const *argv[])
{
#if 0
    queue<int> myqueue;

    for (int idx = 1; idx <= BUFFER_SIZE; idx++)
    {
        myqueue.push(idx);
    }
    int len =  myqueue.size();
    printf("len:%d\n\n", len);

    int frontVal = 0;
    int backVal = 0;

    while (!myqueue.empty())
    {
        frontVal =myqueue.front();
        backVal = myqueue.back();
        printf("frontVal:%d\n", frontVal);
        printf("backVal:%d\n", backVal);
        putchar(10);
        myqueue.pop();
    }
#endif

#if 1
    Stu_info stu1, stu2, stu3;
    memset(&stu1, 0, sizeof(stu1));
    memset(&stu2, 0, sizeof(stu2));
    memset(&stu3, 0, sizeof(stu3));

    stu1.age = 10;
    strncpy(stu1.name, "zhangsan", sizeof(stu3.name) - 1);
    stu1.sex = 'm';

    stu2.age = 20;
    strncpy(stu2.name, "lisi", sizeof(stu3.name) - 1);
    stu2.sex = 'w';

    stu3.age = 30;
    strncpy(stu3.name, "wangwu", sizeof(stu3.name) - 1);
    stu3.sex = 'm';

    queue<Stu_info *> myqueue;

    myqueue.push(&stu1);
    myqueue.push(&stu2);
    myqueue.push(&stu3);

    Stu_info *frontVal = NULL;
    memset(&frontVal, 0, sizeof(Stu_info));

    while (!myqueue.empty())
    {
        frontVal = myqueue.front();
        myqueue.pop();
        printf("age:%d  name:%s  sex:%c\n", frontVal->age, frontVal->name, frontVal->sex);
    }
#endif

    return 0;
}