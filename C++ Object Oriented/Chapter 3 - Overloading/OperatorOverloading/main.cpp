#include <cstdlib>
#include <iostream>

using namespace std;

class Box{
    private:
        double length;
        double breadth;
        double height;
    public:
        void setLength(int l)
        {
            length = l;
        }
        int getLength()
        {
            return length;
        }
        void setBreadth(int b)
        {
            breadth = b;
        }
        int getBreadth()
        {
            return breadth;
        }
        void setHeight(int h)
        {
            height = h;
        }
        int getHeight()
        {
            return height;
        }
        double getVolume()
        {
            return (length * breadth * height);
        }
        // Overload + operator to add two Box objects.
        Box operator+(const Box& b)
        {
            Box box;
            box.length = this->length + b.length;
            box.height = this->height + b.height;
            box.breadth = this->breadth + b.breadth; 
            return box;
        }
};

int main(int argc, char** argv) {
    Box Box1;                // Declare Box1 of type Box
    Box Box2;                // Declare Box2 of type Box
    Box Box3;                // Declare Box3 of type Box
    double volume = 0.0;
    
    Box1.setLength(6.0); 
    Box1.setBreadth(7.0); 
    Box1.setHeight(5.0);
 
    // box 2 specification
    Box2.setLength(12.0); 
    Box2.setBreadth(13.0); 
    Box2.setHeight(10.0);
    
    // volume of box 1
    volume = Box1.getVolume();
    cout << "Volume of Box1 : " << volume <<endl;
 
    // volume of box 2
    volume = Box2.getVolume();
    cout << "Volume of Box2 : " << volume <<endl;
    
    // Add two object as follows:
    Box3 = Box1 + Box2;
    
    // volume of box 3
    volume = Box3.getVolume();
    cout << "Volume of Box3 : " << volume <<endl;
    return 0;
}

