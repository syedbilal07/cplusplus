#include <cstdlib>
#include <iostream>

using namespace std;

class Box{
    public:
        Box()
        {
            cout << "Constructor Called" << endl;
        }
        ~Box()
        {
            cout << "Destructor Called" << endl;
        }
};

int main(int argc, char** argv) {
    Box* myBoxArray = new Box[4];
    delete [] myBoxArray; // Delete array
    return 0;
}

