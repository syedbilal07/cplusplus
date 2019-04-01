#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int a = 100;
    int b = 200;
    if(a == 100){
        if(b == 200){
            cout << "value of a is 100 and value of b is 200" << endl;
        }
    }
    cout << "exact value of a is :" << a << endl;
    cout << "exact value of b is :" << b << endl;
    return 0;
}

