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
        void operator=(const Distance &D)
        {
            feet = D.feet;
            inches = D.inches;
        }
};

int main(int argc, char** argv) {
    Distance D1(11,5), D2(5,6);
    
    cout << "First Distance : "; 
    D1.DisplayDistance();
    cout << "Second Distance :"; 
    D2.DisplayDistance();
    
    // use assignment operator
    D1 = D2;
    cout << "First Distance : "; 
    D1.DisplayDistance();
    
    return 0;
}

