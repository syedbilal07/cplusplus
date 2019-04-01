#include <cstdlib>
#include <iostream>

using namespace std;

class Box{
    double width;
    public:
        double length;
        void setWidth(double wid);
        friend void getWidth(Box box);
};
// Member function definition
void Box::setWidth(double wid){
    width = wid;
}
// Note: printWidth() is not a member function of any class.
void getWidth(Box box){
     /* Because printWidth() is a friend of Box, it can
    directly access any member of this class */
    cout << "The width is : " << box.width << endl;
}
int main(int argc, char** argv) {
    Box box;
    box.setWidth(9.6);
    getWidth(box);
    return 0;
}

