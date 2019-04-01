#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int ROW = 2;
    int COL = 3;
    int i;
    double **pvalue = new double* [ROW]; // Allocate memory for rows
    
    // Now allocate memory for columns
    for(i = 0; i < COL; i++)
    {
        pvalue[i] = new double[COL];
    }
    // releasing memory
    for(i = 0; i < COL; i++)
    {
        delete[] pvalue[i];
    }
    delete[] pvalue;
    return 0;
}

