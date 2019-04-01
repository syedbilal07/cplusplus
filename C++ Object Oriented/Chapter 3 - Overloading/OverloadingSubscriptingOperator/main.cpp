#include <cstdlib>
#include <iostream>

using namespace std;

const int SIZE = 10;

class safearray{
    private:
        int arr[SIZE];
    public:
        safearray()
        {
            register int i;
            for(i = 0; i < SIZE; i++){
                arr[i] = i;
            }
        }
        int &operator[](int i)
        {
            if(i > SIZE)  
            {
                cout << "Index Out Of Bounds! " << endl;
                return arr[0];
            }
            return arr[i];
        }
};

int main(int argc, char** argv) {
    safearray A;
    cout << "Value of A[2] : " << A[2] <<endl;
    cout << "Value of A[5] : " << A[5]<<endl;
    cout << "Value of A[12] : " << A[12]<<endl;
    return 0;
}

