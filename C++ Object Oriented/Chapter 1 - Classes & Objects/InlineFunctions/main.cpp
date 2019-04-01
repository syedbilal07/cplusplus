#include <cstdlib>
#include <iostream>

using namespace std;

inline int Max(int x, int y){
    return (x > y) ? x : y;
}

int main(int argc, char** argv) {
    cout << "Max Between 10 & 20 Is : " << Max(10,20) << endl;
    cout << "Max Between 50 & 55 Is : " << Max(50,55) << endl;
    cout << "Max Between 60 & 70 Is : " << Max(60,70) << endl;
    return 0;
}

