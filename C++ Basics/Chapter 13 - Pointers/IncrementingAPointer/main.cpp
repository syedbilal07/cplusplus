#include <cstdlib>
#include <iostream>

using namespace std;

const int MAX = 3;

int main(int argc, char** argv) {
    int var[MAX] = {10, 100, 200};
    int i;
    int *ptr;
    
    // let us have array address in pointer.
    ptr = var;
    
    for(i = 0; i < MAX; i++){
       cout << "Address of var[" << i << "] = " << ptr << endl;
       cout << "Value of var[" << i << "] = " << *ptr << endl;
       
       ptr++;
    }
    return 0;
}

