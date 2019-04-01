#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int  var = 20;   // actual variable declaration.
    int  *ip;        // pointer variable 
    
    ip = &var; // store address of var in pointer variable
    
    cout << "Value of var variable : " << var << endl;
    cout << "Address stored in ip variable : " << ip << endl;
    cout << "Value of *ip variable : " << *ip << endl;
    
    return 0;
}

