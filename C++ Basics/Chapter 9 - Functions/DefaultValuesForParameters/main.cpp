#include <cstdlib>
#include <iostream>

using namespace std;

int sum(int a, int b = 20){
    int result;
    result = a + b;
    return result;
}

int main(int argc, char** argv) {
    int a = 100;
    int b = 200;
    int result;
    result = sum(a,b); // 100 + 200 = 300
    cout << "Total Value Is : " << result << endl;
    
    result = sum(a); // 100 + 20 = 120
    cout << "Total Value Is : " << result << endl;
    return 0;
}

