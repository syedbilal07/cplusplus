#include <cstdlib>
#include <iostream>

using namespace std;

const int MAX = 3;

int main(int argc, char** argv) {
    int var[MAX] = {10, 100, 200};
    int *ptr;
    int i;
    
    // let us have address of the last element in pointer.
    ptr = &var[MAX - 1];
    
    for(i = MAX; i > 0; i--){
        cout << "Address of var[" << i << "] = " << ptr << endl;
        cout << "Value of var[" << i << "] = " << *ptr << endl;
       
        ptr--;
    }
    return 0;
}

