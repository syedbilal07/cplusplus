#include <cstdlib>
#include <iostream>

using namespace std;

class Box{
    protected:
        double width;
};

// SmallBox is the derived class.
class SmallBox:Box{
    public:
        void setWidth(double wid);
        double getWidth();
};
void SmallBox::setWidth(double wid){
    width = wid;
}
double SmallBox::getWidth() {
    return width;
}

int main(int argc, char** argv) {
    SmallBox box;
    box.setWidth(23.2);
    cout << "The Width Is : " << box.getWidth() << endl;
    return 0;
}

