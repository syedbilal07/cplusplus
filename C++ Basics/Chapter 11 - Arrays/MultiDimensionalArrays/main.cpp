#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    // an array with 5 rows and 2 columns
    int arr[5][2] = {{1,2},{2,3},{3,6},{4,8},{5,10}};
    int i,j;
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 2; j++){
            cout << "arr [" << i << "]" << "{" << j << "]" << " = " << arr[i][j] << endl; 
        }
    }
    return 0;
}

