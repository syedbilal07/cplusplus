#include <cstdlib>
#include <iostream>

using namespace std;

class Box{
    public:
        static int objectCount;
        Box(double l=2.0, double b=2.0, double h=2.0)
        {
            cout << "Constructor Called" << endl;
            height = h;
            length = l;
            breadth = b;
            // Increase every time object is created
            objectCount++;
        }
    private:
        double length;
        double breadth;
        double height;
};
// Initialize static member of class Box
int Box::objectCount = 0;

int main(int argc, char** argv) {
    Box Box1(3.3, 1.2, 1.5);    // Declare box1
    Box Box2(8.5, 6.0, 2.0);    // Declare box2
    
    // Print total number of objects.
    cout << "Total objects: " << Box::objectCount << endl;
    return 0;
}

