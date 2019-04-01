#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    // Local variable declaration:
    int a = 10;
    do{
        cout << "a is : " << a << endl;
        a++;
        if(a > 15)
            break;
    }
    while(a < 20);
    return 0;
}

