#include <cstdlib>
#include <iostream>

using namespace std;

double getAverage(int arr[], int size) {
   int i, sum = 0;       
   double avg;          

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }

   avg = double(sum) / size;

   return avg;
}

int main(int argc, char** argv) {
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    
    // pass pointer to the array as an argument.
    avg = getAverage(balance,5);
    
    // output the returned value 
    cout << "Average Is : " << avg << endl;
    return 0;
}

