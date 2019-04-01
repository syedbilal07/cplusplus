#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int a = 10;
    do{
        if(a == 15){
            a = a + 1;
            continue;
        }
        cout << "a is : " << a << endl;
        a++;
    }
    while(a < 20);
    return 0;
}

