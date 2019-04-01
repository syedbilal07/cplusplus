#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    // local variable declaration:
    int a = 100;
    int b = 200;
    
    switch(a){
        case 100:
            cout << "this is outer switch" << endl;
            switch(b){
                case 200:
                    cout << "this is inner switch" << endl;
            }
    }
    cout << "exact value of a is : " << a << endl;
    cout << "exact value of b is : " << b << endl;
    return 0;
}

