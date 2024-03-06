#include <iostream>
#include <string>

class Student
{
public:
    /* 无参构造 */
    Student()
    {
        std::cout<<"无参构造！"<<std::endl;
    }
    /* 带参构造 */
    Student(int age, const std::string & name)
    {
        m_age = age;
        m_name = name;
        std::cout<<"带二参构造！"<<std::endl;
    }

    Student(const std::string & name)
    {
        m_age = 0;
        m_name = name;
        std::cout<<"带一参构造！"<<std::endl;
    }

    Student(const Student& s)
    {
        std::cout<<"拷贝构造函数"<<std::endl;
        m_age = s.m_age;
        m_name = s.m_name;
    }

    void operator=(const Student& s)
    {
        std::cout<<"赋值运算符的重载"<<std::endl;
        m_age = s.m_age;
        m_name = s.m_name;
    }

    // ~Student()
    // {
    //     std::cout<<"析构函数"<<std::endl;
    // }

    void SetAge(int age);
    int GetAge();
    void SetName(const std::string& name);
    /* 类内声明 */
    std::string GetName();
private:
    int m_age;
    std::string m_name;
};


void Student::SetAge(int age)
{
    m_age = age;
}

int Student::GetAge()
{
    return m_age;
}

void Student::SetName(const std::string &name)
{
    m_name = name;
}

/* 类外定义 */
std::string Student::GetName()
{
    return m_name;
}

// void func(Student s)
// {

// }

int main()
{
    /* 无参构造 */
    Student s;
    s.SetAge(10);
    s.SetName("zhangsan");
    std::cout<<s.GetAge()<<" "<<s.GetName()<<std::endl;
    std::cout<<"-------------\n";

    /* 带二参构造 */
    Student q(1, "zhangsan");
    std::cout<<q.GetAge()<<" "<<q.GetName()<<std::endl;
    std::cout<<"-------------\n";

    /* 带一参构造 */
    Student t("zhangsan");
    std::cout<<t.GetAge()<<" "<<t.GetName()<<std::endl;
    std::cout<<"-------------\n";

    // /* 多一次内存拷贝（无限拷贝） */
    // func(s);
    /* 拷贝构造 */
#if 0
    Student s1 = s;
#else
    Student s1(s);
#endif
    std::cout << s1.GetAge()<<" "<<s1.GetName()<<std::endl;
    std::cout<<"-------------\n";

    /* 赋值运算符的重载 */
    Student s2;
    s2 = s;
    std::cout << s2.GetAge()<<" "<<s2.GetName()<<std::endl;
    std::cout<<"-------------\n";

    /* 什么时候调用构造 什么时候调用析构 */
    /* 申请调用构造 */
    Student *p = new Student;
    /* 释放调用析构 */
    delete p;
    
    return 0;
}