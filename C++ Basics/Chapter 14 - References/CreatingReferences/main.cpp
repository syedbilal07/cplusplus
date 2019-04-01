#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    // declare simple variables
    int i;
    double d;
    
    // declare reference variables
    int& r = i;
    double& s = d;
    
    i = 5;
    cout << "Value Of i Is : " << i << endl;
    cout << "Reference Value Of i Is : " << r << endl;
    
    d = 11.7;
    cout << "Value Of d Is : " << d << endl;
    cout << "Reference Value Of d Is : " << s << endl;
    return 0;
}

