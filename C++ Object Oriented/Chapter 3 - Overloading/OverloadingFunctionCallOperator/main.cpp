#include <cstdlib>
#include <iostream>

using namespace std;

class Distance
{
    private:
        int inches;
        int feet;
    public:
        Distance()
        {
            inches = 0;
            feet = 0;
        }
        Distance(int i, int f)
        {
            inches = i;
            feet = f;
        }
        void DisplayDistance()
        {
            cout << "F: " << feet <<  " I:" <<  inches << endl;
        }
        Distance operator()(int a, int b, int c)
        {
            Distance D;
            D.feet = a + c + 10;
            D.inches = b + c + 100;
            return D;
        }
};

int main(int argc, char** argv) {
    Distance D1(11,10), D2;
    cout << "First Distance : "; 
    D1.DisplayDistance();
    
    D2 = D1(10,10,10);
    cout << "Second Distance : "; 
    D2.DisplayDistance();
    return 0;
}

