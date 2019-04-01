#include <cstdlib>
#include <iostream>

using namespace std;

class printData{
    public:
        void print(int i){
            cout << "printing int " << i << endl;
        }
        void print(double d){
            cout << "printing double " << d << endl;
        }
        void print(char* c) {
            cout << "Printing character: " << c << endl;
        }
};

int main(int argc, char** argv) {
    printData obj;
    obj.print(2);
    obj.print(21.22);
    obj.print("Hello C++");
    return 0;
}

