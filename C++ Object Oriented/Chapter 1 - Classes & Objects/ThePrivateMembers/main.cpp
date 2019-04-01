#include <cstdlib>
#include <iostream>

using namespace std;

class Box{
    public:
        double length;
        void setWidth(double wid);
        double getWidth(void);
    private:
        double width;
};
void Box::setWidth(double wid){
    width = wid;
}
double Box::getWidth() {
    return width;
}

int main(int argc, char** argv) {
    Box Box1;
    Box1.length = 25.3;
    cout << "Length Is : " << Box1.length << endl;
    
    Box1.setWidth(21.2);
    cout << "The Width Is : " << Box1.getWidth() << endl;
    return 0;
}

