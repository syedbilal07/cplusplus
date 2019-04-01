#include <cstdlib>
#include <iostream>

using namespace std;

// Base class Shape
class Shape{
    public:
        void setWidth(int wid)
        {
            width = wid;
        }
        void setHeight(int hei)
        {
            height = hei;
        }
    protected:
        int height;
        int width;
};
// Base class PaintCost
class PaintCost{
    public:
        int getCost(int area)
        {
            return area * 70;
        }
};
// Derived class
class Rectangle: public Shape, public PaintCost{
    public:
        int getArea()
        {
            return (width * height);
        }
};
int main(int argc, char** argv) {
    int area;
    Rectangle rect;
    
    rect.setWidth(5);
    rect.setHeight(7);
    area = rect.getArea();
    cout << "Area Is : " << area << endl;
    
    cout << "Total Paint Cost : $" << rect.getCost(area) << endl;
    
    return 0;
}

