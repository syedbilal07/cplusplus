#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    // Local variable declaration:
    int a = 10;
    LOOP:do{
        if(a == 15){
            a = a + 1;
            goto LOOP;
        }
        cout << "a is : " << a << endl;
        a = a +1;
    }
    while(a < 20);
    return 0;
}

