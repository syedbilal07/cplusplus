#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;
    int i,j;  
    p = balance;
    
    cout << "Array values using pointer" << endl;
    
    for(i = 0; i < 5; i++){
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }
    
    cout << "Array values using balance as address" << endl;
    
    for(j = 0; j < 5; j++){
        cout << "*(p + " << j << ") : ";
        cout << *(balance + j) << endl;
    }
    return 0;
}

