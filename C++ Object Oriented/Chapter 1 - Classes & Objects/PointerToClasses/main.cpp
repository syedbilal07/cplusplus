#include <cstdlib>
#include <iostream>

using namespace std;

class Box{
    public:
        Box(double l=2.0, double b=2.0, double h=2.0){
            cout << "Constructor Called" << endl;
            length = l;
            breadth = b;
            height = h;
        }
        double Volume(){
            return length * breadth * height;
        }
    private:
        double height;
        double breadth;
        double length;
};

int main(int argc, char** argv) {
    Box Box1(3.3, 1.2, 1.5);    // Declare box1
    Box Box2(8.5, 6.0, 2.0); // Declare box2
    Box *ptrBox; // Declare pointer to a class.
    
    // Save the address of first object
    ptrBox = &Box1;
    
    cout << "Volume Of Box : " << ptrBox->Volume() << endl;
    
    ptrBox = &Box2;
    cout << "Volume Of The Box : " << ptrBox->Volume() << endl;
    return 0;
}

