#include <cstdlib>
#include <iostream>

using namespace std;
// function definition to swap the values.
void swap(int x, int y){
    int temp; 
    temp = x; /* save the value of x */
    x = y; /* put y into x */
    y = temp;/* put x into y */
}

int main(int argc, char** argv) {
    // local variable declaration:
    int a = 100;
    int b = 200;
    
    cout << "Before Swap, Value Of a Is : " << a << endl;
    cout << "Before Swap, Value Of b Is : " << b << endl;
    // calling a function to swap the values.
    swap(a,b);
    
    cout << "After Swap, Value Of a Is : " << a << endl;
    cout << "After Swap, Value Of b Is : " << b << endl;
    
    return 0;
}

