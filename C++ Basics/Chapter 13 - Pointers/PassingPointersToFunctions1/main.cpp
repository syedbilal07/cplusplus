#include <cstdlib>
#include <iostream>

using namespace std;

void getSeconds(unsigned long *par){
    // get the current number of seconds
    *par = time(NULL);
    return;
}

int main(int argc, char** argv) {
    unsigned long sec;
    
    getSeconds(&sec);
    
    // print the actual value
    cout << "Number of seconds :" << sec << endl;
    return 0;
}

