#include <cstdlib>
#include <iostream>

using namespace std;

class Box{
    public:
        // Constructor definition
        Box(double l=2.0, double b=2.0, double h=2.0){
            cout << "Constructor Called" << endl;
            length = l;
            breadth = b;
            height = h; 
        }
        double Volume(){
            return length * breadth * height;
        }
        int compare(Box box){
            return this->Volume() > box.Volume();
        }
    private:
        double length;
        double height;
        double breadth;
};

int main(int argc, char** argv) {
    Box Box1(3.3, 1.2, 1.5);    // Declare box1
    Box Box2(8.5, 6.0, 2.0);    // Declare box2
    
    if(Box1.compare(Box2)){
        cout << "Box2 Is Smaller Than Box1" << endl;
    }
    else{
        cout << "Box2 Is Equal To Or Larger Than Box1" <<endl;
    }
    return 0;
}

