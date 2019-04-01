#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int var1;
    char var2[10];
    
    cout << "Address Of var1 : " << &var1 << endl;
    cout << "Address Of var2[10] : " << &var2 << endl;
    return 0;
}

