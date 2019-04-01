#include <cstdlib>
#include <iostream>

using namespace std;

class Line{
    double length;
    public:
        void setLength(double len);
        double getLength();
        Line();  
};
Line::Line(){
    cout << "Constructor Called." << endl;
}
void Line::setLength(double len){
    length = len;
}
double Line::getLength(){
    return length;
}
int main(int argc, char** argv) {
    Line line;
    line.setLength(9.6);
    cout << "Length Is : " << line.getLength() << endl;
    return 0;
}