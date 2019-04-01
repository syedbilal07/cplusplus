#include <cstdlib>
#include <iostream>

using namespace std;

class Line{
    double length;
    public:
        void setLength(double len);
        double getLength();
        Line(double len);
};
Line::Line(double len){
    cout << "Constructor Called, The Length Is : " << len << endl;
    length = len;
}
void Line::setLength(double len){
    length = len;
}
double Line::getLength(){
    return length;
}
int main(int argc, char** argv) {
    Line line(10.0);
    // get initially set length.
    cout << "Length Of Line Is : " << line.getLength() << endl;
    // set line length again
    line.setLength(20.0);
    cout << "Length Of Line Is : " << line.getLength() << endl;
    return 0;
}
