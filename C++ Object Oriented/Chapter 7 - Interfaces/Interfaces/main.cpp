#include <cstdlib>
#include <iostream>

using namespace std;

// Base class
class Shape{
    protected:
        int width;
        int height;
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
        virtual int getArea() = 0;
};

// Derived classes
class Rectangle: public Shape{
    public:
        int getArea()
        {
            return height * width;
        }
};

class Triangle: public Shape{
    public:
    int getArea()
    {
        return (width * height) / 2;
    }
};

int main(int argc, char** argv) {
    Rectangle rect;
    Triangle tri;
    rect.setHeight(5);
    rect.setWidth(7);
    
    cout << "Area Of Rectangle Is : " << rect.getArea() << endl;
    
    tri.setHeight(5);
    tri.setWidth(7);
    cout << "Area Of Triangle Is : " << tri.getArea() << endl;
    return 0;
}

