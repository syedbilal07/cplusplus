#include <cstdlib>
#include <iostream>

using namespace std;

const int MAX = 3;

int main(int argc, char** argv) {
    int var[MAX] = {10, 100, 200};
    int *ptr;
    int i;
    
    // let us have address of the first element in pointer.
    ptr = var;
    
    while(ptr <= &var[MAX - 1]){
        cout << "Address of var[" << i << "] = " << ptr << endl;
        cout << "Value of var[" << i << "] = " << *ptr << endl;
        
        ptr++;
        i++;
    }
    return 0;
}

