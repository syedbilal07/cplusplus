#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;

int main(int argc, char** argv) {
    int n[10]; // n is an array of 10 integers
    int i,j;
    
    for(i = 0; i < 10; i++){
        n[i] = i + 100; // set element at location i to i + 100
    }
    cout << "Element" << setw(13) << "Value" << endl;
    // output each array element's value       
    for(j = 0; j < 10; j++){
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
    return 0;
}

