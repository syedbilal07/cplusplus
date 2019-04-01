#include <cstdlib>
#include <iostream>

using namespace std;
// Global variable declaration:
int g = 10;

int main(int argc, char** argv) {
    // Local variable declaration:
    int a, g;
    int c;
    // actual initialization
    a = 20;
    g = 50;
    c = a + g;
    cout << c << endl;
    return 0;
}

