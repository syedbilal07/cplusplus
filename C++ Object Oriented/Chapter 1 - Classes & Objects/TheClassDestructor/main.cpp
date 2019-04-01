#include <cstdlib>
#include <iostream>

using namespace std;

class Line{
    double length;
    public:
        void setLength(double len);
        double getLength();
        Line(); // This is the constructor declaration
        ~Line(); // This is the destructor: declaration
};
Line::Line(){
    cout << "Constructor Called" << endl;
}
Line::~Line(){
    cout << "Deconstructor Called" << endl;
}
void Line::setLength(double len){
    length = len;
}
double Line::getLength() {
    return length;
}
int main(int argc, char** argv) {
    Line line;
    line.setLength(12.2);
    cout << "Length Is : " << line.getLength() << endl;
    return 0;
}