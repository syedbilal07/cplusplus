#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    // local variable declaration:
    int a = 30;
    
    if(a < 20){
        cout << "a is less than 20" << endl;
    }
    else{
        cout << "a is not less than 20" << endl;
    }
    cout << "value of a is : " << a << endl;
    return 0;
}

