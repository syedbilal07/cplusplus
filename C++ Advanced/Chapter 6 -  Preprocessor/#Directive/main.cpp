#include <cstdlib>
#include <iostream>
#define MKSTR(x) #x

using namespace std;

int main(int argc, char** argv) {
    cout << MKSTR(Hello C++) << endl;
    return 0;
}

