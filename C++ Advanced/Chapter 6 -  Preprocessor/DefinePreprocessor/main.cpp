#include <cstdlib>
#include <iostream>
#define MIN(a,b) (((a) < (b)) ? a :b) 

using namespace std;

int main(int argc, char** argv) {
    int i,j;
    i = 300;
    j = 30;
    cout <<"The minimum is " << MIN(i, j) << endl;
    return 0;
}

