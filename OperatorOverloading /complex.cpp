#include <iostream>

class Complex
{
public:
    Complex(int real, int vir):real(real), vir(vir){}

    Complex operator+(const Complex& c)
    {
        Complex result(0,0);
        result.real = this->real + c.real;
        result.vir = this->vir + c.vir;
        return result;
    }

    Complex operator-(const Complex& c)
    {
        Complex result(0, 0);
        result.real = this->real - c.real;
        result.vir = this->vir - c.vir;
        return result;
    }

    /* 前置 */
    Complex operator++()
    {
        this->real++;
        this->vir++;
        return *this;
    }
    /* 后置 */
    Complex operator++(int)
    {
        Complex temp = *this;
        this->real++;
        this->vir++;
        return temp;
    }

    // void show()
    // {
    //     if (vir != 0)
    //     {
    //         std::cout<<real<<"+"<<vir<<"i"<<std::endl;
    //     }
    //     else
    //     {
    //         std::cout<<real<<std::endl;
    //     } 
    // }
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
    friend std::istream& operator>>(std::istream& is, Complex& c); 
private: 
    int real;
    int vir;
};

std::ostream& operator<<(std::ostream& os, const Complex& c)
{
    if (c.vir != 0)
    {
        os<<c.real<<"+"<<c.vir<<"i";
    }
    else
    {
        os<<c.real;
    }
    return os;
}

std::istream& operator>>(std::istream& is, Complex& c)
{
    is>>c.real>>c.vir;
    return is;
}


int main()
{
    Complex c(2,0);
    Complex c1(3,2);
// #if 1
//     Complex c2 = c + c1;
// #else
//     Complex c2 = c.operator+(c1);
// #endif
//     c2.show();

    // Complex c2 = c - c1;
    // std::cin>>c2;
    // std::cout<<c2<<std::endl;

    std::cout<<++c1<<std::endl;
    std::cout<<c1<<std::endl;
    return 0;
}