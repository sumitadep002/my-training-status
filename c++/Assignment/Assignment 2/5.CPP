/*Write a program that defines a shape class with a constructor that gives value to width
and height. The define two sub-classes triangle and rectangle, that calculates the area
of the shape area(). In the main, define two variables a triangle and a rectangle and
then call the area() function in these two variables*/
#include <iostream>
using namespace std;
class shape
{
private:
    float width, length;

public:
    shape(float, float);
    int getWidth()
    {
        return width;
    }
    int getLength()
    {
        return length;
    }
    
};
class rectangle:public shape{
    public:
    
    int area()
    {
        return (getLength()*getWidth());
    }
};
class triangle:public shape{
    public:
    int area()
    {
        return (getLength()*getWidth());
    }
};




shape::shape(float length, float width)
{
    this->length = length;
    this->width = width;
}


int main()
{
    shape s(10,10);
    triangle t;
    rectangle r;
    cout<<endl<<t.area();
    cout<<endl<<r.area();

    return 0;
}