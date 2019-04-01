#include <cstdlib>
#include <iostream>

using namespace std;

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

double& setValues(int i){
    return vals[i]; // return a reference to the ith element
}

int main(int argc, char** argv) {
    int i;
    cout << "Values Before Change" << endl;
    for(i = 0; i < 5; i++){
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }
    setValues(1) = 20.23;
    setValues(3) = 65.26;
    
    cout << "Values After Change" << endl;
    for(i = 0; i < 5; i++){
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }
    return 0;
}

