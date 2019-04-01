#include <cstdlib>
#include <iostream>

using namespace std;

const int LENGTH = 10;
const int WIDTH  = 5;
const char NEWLINE = '\n';

int main(int argc, char** argv) {
    int area;
    area = LENGTH * WIDTH;
    cout << area << NEWLINE;
    return 0;
}

