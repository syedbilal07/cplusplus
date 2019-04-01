#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    short unsigned int x; // value always positive
    short signed int y; // value can be positive or negative
    
    x = 50000;
    y = 50000;
    
    cout << x << endl; // 50000
    cout << y << endl; // -15536
    
    return 0;
}

