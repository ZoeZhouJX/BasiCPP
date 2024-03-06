#include <iostream>
#include <cmath>

/* 辗转相除法  两个数的最大公约数 */
int gcd(int x, int y)
{
    int max = std::max(x, y);
    int min = std::min(x, y);

    int r = max % min;
    while (r != 0)
    {
        max = min;
        min = r;
        r = max % min;
    }
    return min;
}

class Point
{
public:
    friend double Distance(const Point &p1, const Point &p2);
    friend class Line;
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void show()
    {
        std::cout<<"("<<x<<","<<y<<")"<<std::endl;
    }
private:
    int x; 
    int y;
};

double Distance(const Point& p1, const Point& p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

class Line
{
public:
    // friend class Circle;
    Line(double A, double B, double C):A(A), B(B), C(C){}
    Line(const Point&p1, const Point&p2)
    {
        A = p1.y - p2.y;
        B = p2.x - p1.x;
        C = p1.x * p2.y - p1.y * p2.x;
        // c->p;

        int r = gcd(gcd(A, B), C);
        std::cout<<r<<std::endl;
        A /= r;
        B /= r;
        C /= r;
    }

    double Distance(const Point& p)
    {
        double distance = 1.0 * abs(A * p.x + B * p.y + C) / (sqrt(A * A + B * B));
        return distance;
    }

    void show()
    {
        std::cout<<A<<"x+"<<B<<"y+"<<C<<"=0"<<std::endl;
    }
private:
    double A;
    double B;
    double C;
    // Circle *c;
};

// class Circle
// {
// public:
//     friend class Line;
//     Circle():p(0,0), l(0,0,0)
//     {
//         l.A;
//         p.x;
//     }
// private:
//     Point p;
//     int len;
//     Line l;
// };


int main()
{
    Point p1(-12,2);
    Point p2(-16,4);
    Line l(p1, p2);
    // std::cout<<Distance(p1, p2)<<std::endl;
    l.show();

    // std::cout<<l.Distance(Point(0,1))<<std::endl;
    return 0;
}