#include <cstdlib>
#include <iostream>

using namespace std;

const int MAX = 3;

int main(int argc, char** argv) {
    int var[MAX] = {10, 100, 200};
    int i;
    
    for(i = 0; i < MAX; i++){
        cout << "Value Of var[" << i << "] : " << var[i] <<endl;
    }
    return 0;
}

