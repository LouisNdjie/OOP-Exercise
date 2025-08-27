#include<iostream>

class Point
{
private:
    float x,y;
public:
    Point(float X, float Y) : x(X), y(Y){};
    Point operator+(Point& B)
    {
        Point somme(this->x + B.x, this->y + B.y);
        return somme;
    }
    void print_point()
    {
        std::cout << "affichons le point X : " << this->x << ", Y : " << this->y;
    }
    ~Point(){};
};

int main(void)
{
    Point p1(2, 3), p2(4, 1);
    Point p3 = p1 + p2; 
    p3.print_point();
}