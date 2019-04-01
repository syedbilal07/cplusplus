#include <cstdlib>
#include <iostream>

using namespace std;

class Line{
    public:
        int getLength();
        Line(int len);
        Line(const Line &obj);
        ~Line();
    private:
    int *ptr;
};
Line::Line(int len){
    cout << "Normal Constructor Allocating ptr" << endl;
    ptr = new int;
    *ptr = len;
}
Line::Line(const Line &obj){
    cout << "Copy Constructor Allocating ptr" << endl;
    ptr = new int;
    *ptr = *obj.ptr;
}
Line::~Line(){
    cout << "Freeing Memory ...!" << endl;
    delete ptr;
}
int Line::getLength(){
    return *ptr;
}
void display(Line obj){
    cout << "Length Of Line Is : " << obj.getLength() << endl;
}
int main(int argc, char** argv) {
    Line line1(10);
    
    // This also calls copy constructor
    Line line2 = line1;
    display(line1);
    display(line2);
    return 0;
}

