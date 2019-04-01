#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    // Local variable declaration:
    int x, y = 10;
    
    x = (y < 10) ? 30 : 40;
    cout << "value of x is : " << x << endl;
    return 0;
}

