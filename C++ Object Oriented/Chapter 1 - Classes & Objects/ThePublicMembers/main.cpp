#include <cstdlib>
#include <iostream>

using namespace std;

class Line{
    public:
       double length;
       void setLength(double len);
       double getLength(void);
};
// Member functions definitions
double Line::getLength(void){
    return length;
}
void Line::setLength(double len){
    length = len;
}
int main(int argc, char** argv) {
    Line line;
    double length;
    line.setLength(23.4);
    
    length = line.getLength();
    cout << "The Length Is : " << length << endl;
    return 0;
}

