#include <cstdlib>
#include <iostream>

using namespace std;

// Base class
class Shape{
    public:
        void setWidth(int wid)
        {
            width = wid;
        }
        void setHeight(int h)
        {
            height = h;
        }
    protected:
        int width;
        int height;
};
// Derived class
class Rectangle:public Shape{
    public:
        int getArea(){
            return width * height;
        } 
};
int main(int argc, char** argv) {
    Rectangle rect;
    rect.setHeight(7);
    rect.setWidth(5);
    cout << "The Area Is : " << rect.getArea() << endl;
    return 0;
}

