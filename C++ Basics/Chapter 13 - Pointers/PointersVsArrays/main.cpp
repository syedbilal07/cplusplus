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
    
    for(i = 0; i < MAX; i++){
        cout << "Address Of var[" << i << "] : " << ptr << endl;  
        cout << "Value Of var[" << i << "] : " << *ptr << endl;
        ptr++;
    }
    return 0;
}

