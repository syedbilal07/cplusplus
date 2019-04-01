#include <cstdlib>
#include <iostream>

using namespace std;

class Box{
public:
    double length;
    double height;
    double breadth;
    
   // Member functions declaration
    double getVolume(void);
    void setLength(double len);
    void setHeight(double hei);
    void setBreadth(double bre);
};

// Member functions definitions
double Box::getVolume(void){
    return length * breadth * height;
}
void Box::setLength(double len){
    length = len;
}
void Box::setBreadth(double bre){
    breadth = bre;
}
void Box::setHeight(double hei){
    height = hei;
}
int main(int argc, char** argv) {
    Box Box1;
    Box Box2;
    double volume = 0.0;
    
    // box 1 specification
    Box1.setLength(6.0); 
    Box1.setBreadth(7.0); 
    Box1.setHeight(5.0);

    // box 2 specification
    Box2.setLength(12.0); 
    Box2.setBreadth(13.0); 
    Box2.setHeight(10.0);
    
    volume = Box1.getVolume();
    cout << "Volume Of Box1 Is : " << volume << endl;
    
    volume = Box2.getVolume();
    cout << "Volume Of Box2 Is : " << volume << endl;
    return 0;
}

