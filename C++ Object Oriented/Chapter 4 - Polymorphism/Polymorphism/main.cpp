#include <cstdlib>
#include <iostream>

using namespace std;

class Shape{
    protected:
        int width, height;
    public:
        Shape(int a = 0, int b = 0)
        {
            width = a;
            height = b;
        }
        virtual int area()
        {
            cout << "Parent Class Area" << endl;
        }
};

class Rectangle: public Shape{
    public:
        Rectangle(int a = 0, int b = 0):Shape(a,b) {}
        int area()
        {
            cout << "Rectangle Class Area" << endl;
            return height * width;
        }
};

class Triangle: public Shape{
    public:
        Triangle(int a = 0, int b = 0):Shape(a,b) {}
        int area()
        {
            cout << "Triangle Class Area" << endl;
            return (width * height / 2);
        }
};

int main(int argc, char** argv) {
    Shape *shape;
    Rectangle rect(10,7);
    Triangle tri(10,5);
    
    // store the address of Rectangle
    shape = &rect;
    // call rectangle area.
    shape->area();
    
    // store the address of Triangle
    shape = &tri;
    // call triangle area.
    shape->area();
    return 0;
}

