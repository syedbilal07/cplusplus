#include <cstdlib>
#include <iostream>

using namespace std;

double getAverage(int size, int *arr){
    int i, sum = 0;
    double avg;
    
    for(i = 0; i < size; i ++){
        sum += arr[i];
    }
    
    avg = (double)sum/size;
    return avg;
}

int main(int argc, char** argv) {
    // an int array with 5 elements.
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    
    avg = getAverage(5,balance);
    cout << "Average Value Is : " << avg << endl;
    return 0;
}

