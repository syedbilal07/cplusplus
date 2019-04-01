#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

// function to generate and retrun random numbers.
int * getRandom( ) {
    static int r[10];
    int i;
    // set the seed
    srand((unsigned)time(NULL));
    
    for(i = 0; i < 10; i++){
        r[i] = rand();
        cout << r[i] << endl;
    }
    return r;
}


int main(int argc, char** argv) {
    // a pointer to an int.
    int *p;
    int i;
    p = getRandom();
    
    for(i = 0; i < 10; i++){
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }
    return 0;
}

