#include <cstdlib>
#include <iostream>
#define DEBUG
#define MIN(a,b) (((a)<(b)) ? a : b)

using namespace std;

int main(int argc, char** argv) {
    int i,j;
    i = 300;
    j = 30;
#ifdef DEBUG
    cerr << "Trace : Inside Main Function" << endl;
#endif
#if 0
    /* This is commented part */
    cout << MKSTR(Hello C++) << endl;
#endif
    cout <<"The minimum is " << MIN(i, j) << endl;
#ifdef DEBUG
   cerr <<"Trace: Coming out of main function" << endl;
#endif
    return 0;
}

