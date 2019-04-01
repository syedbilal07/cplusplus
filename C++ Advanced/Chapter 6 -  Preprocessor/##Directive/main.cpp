#include <cstdlib>
#include <iostream>
#define concat(a,b) a ## b

using namespace std;

int main(int argc, char** argv) {
    int xy = 100;
    cout << concat(x,y);
    return 0;
}

