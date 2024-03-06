#include "StdMyString.h"
#include <iostream>
#include <cstring>

StdMyString::StdMyString()
{
    // std::cout<<"无参构造"<<std::endl;
    this->size = 0;
    this->capacity = 15;
    this->s = new char[this->capacity];
    memset(s, 0, 15);
}

StdMyString::StdMyString(const char *str)
{
    // std::cout<<"带参构造"<<std::endl;
    this->size = strlen(str);
    if (strlen(str) <= 15)
    {
        this->capacity = 16;
        this->s = new char[this->capacity];
        memset(s, 0, 15);
        strcpy(this->s, str);
    }
    else
    {
        this->capacity = this->size + 1;
        this->s = new char[this->capacity];
        memset(s, 0, this->capacity);
        strcpy(this->s, str);
    }
}

StdMyString::StdMyString(const StdMyString& str)
{
    // std::cout<<"拷贝构造"<<std::endl;
    this->capacity = str.capacity;
    this->size = str.size;
    this->s = new char[this->capacity];
    memset(s, 0, this->capacity);
    strcpy(this->s, str.s);
}

StdMyString::~StdMyString()
{
    // std::cout<<"析构函数"<<std::endl;
    this->size = 0;
    this->capacity = 0;
    delete []this->s;
}

StdMyString StdMyString::operator+(const StdMyString& str)
{
    StdMyString result(*this);
    result.size = this->size + str.size;
    if (result.size < result.capacity)
    {
        /* 不需要扩容 */
        strcat(result.s, str.s);
    }
    else
    {
        /* 需要扩容 */
        result.capacity = result.size + 1;
        char *newStr = new char[result.capacity];
        strcpy(newStr, this->s);
        strcat(newStr, str.s);
        delete []result.s;
        result.s = newStr;
    }
    return result;
}

StdMyString StdMyString::operator-(const StdMyString& str)
{
    StdMyString result (*this);
    char * deleteS = strstr(result.s, str.s);
    while (deleteS != nullptr)
    {
        char *backS = deleteS + str.size;
        while (*backS != '\0')
        {
            *deleteS++ = *backS++;
        }
        *deleteS = '\0';

        deleteS = strstr(result.s, str.s);
    }
    return result;
}

StdMyString& StdMyString::operator+=(const StdMyString& str)
{
    *this = *this + str;
    return *this;
}

StdMyString & StdMyString::operator+=(const char c)
{
    if (this->size + 1 == this->capacity)
    {
        this->capacity *= 2;
        char *newStr = new char[this->capacity];
        strcpy(newStr, this->s);
        delete []this->s;
        this->s = newStr;
    }
    this->s[this->size] = c;
    this->s[this->size + 1] = '\0';
    this->size++;

    return *this;
}

StdMyString& StdMyString::operator=(const StdMyString& str)
{
    // std::cout<<"赋值运算符的重载"<<std::endl;
    this->size = str.size;
    this->capacity = str.capacity;
    delete []this->s;
    this->s = new char[str.capacity];
    strcpy(this->s, str.s);
    return *this;
}

bool StdMyString::operator==(const StdMyString & str)
{
    return strcmp(this->s, str.s) == 0;
}

bool StdMyString::operator!=(const StdMyString & str)
{
    return strcmp(this->s, str.s) != 0;
}

bool StdMyString::operator>(const StdMyString & str)
{
    return strcmp(this->s, str.s) > 0;
}

char& StdMyString::operator[](int index)
{
    return this->s[index];
}

StdMyString::operator int()
{
    return atoi(this->s);
}

StdMyString::operator double()
{
    return atof(this->s);
}

MyStringList StdMyString::split(const StdMyString & str)
{
    StdMyString temp(*this);
    MyStringList list;

    char *s = strtok(temp.s, str.s);
    while (s != nullptr)
    {
        list += s;
        s = strtok(nullptr, str.s);
    }
    return list;
}

StdMyString StdMyString::Number(int a)
{
    StdMyString s;
    sprintf(s.s, "%d", a);
    return s;
}

std::ostream& operator<<(std::ostream& os, const StdMyString& str)
{
    // os<<"size:"<<str.size<<"capacity:"<<str.capacity<<std::endl;
    os<<str.s;
    return os;
}

std::istream & operator>>(std::istream & is, StdMyString & str)
{
    // char temp[1024] = {0};
    // is>>temp;
    // str = temp;
    // return is;

    char c = '\0';
    while ((c = getchar()) != '\n')
    {
        str += c;
    }
    return is;
}

std::ostream& operator<<(std::ostream & os, const MyStringList & list)
{
    for (int i = 0; i <list.size; i++)
    {
        os<<list.string[i]<<std::endl;
    }
    return os;
}

MyStringList::MyStringList()
{
    this->size = 0;
    this->capacity = 15;
    this->string = new StdMyString[this->capacity];
}

MyStringList::~MyStringList()
{
    this->size = this->capacity = 0;
    delete []this->string;
}

void MyStringList::RemoveByIndex(int index)
{
    if (index < 0 || index >= this->size)
    {
        return;
    }
    for (int i = index; i < this->size - 1; i++)
    {
        this->string[i] = this->string[i + 1];
    }
    this->size--;
}

MyStringList &MyStringList::operator+=(const StdMyString &str)
{
    if (this->size == this->capacity)
    {
        this->capacity *= 2;
        StdMyString *newPtr = new StdMyString[this->capacity];
        for (int i = 0; i < this->size; i++)
        {
            newPtr[i] = this->string[i];
        }
        delete []this->string;
        this->string = newPtr;
    }
    this->string[this->size++] = str;
    return *this;
}

MyStringList& MyStringList::operator-=(const StdMyString & str)
{
    for (int i = 0; i < this->size; i++)
    {
        if (this->string[i] == str)
        {
            RemoveByIndex(i);
            i--;
        }
    }
    return *this;
}

StdMyString & MyStringList::operator[](int index)
{
    return this->string[index];
}
