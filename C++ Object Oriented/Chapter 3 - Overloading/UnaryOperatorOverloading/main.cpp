#include <cstdlib>
#include <iostream>

using namespace std;

class Distance{
    private:
        int feet;
        int inches;
    public:
        Distance()
        {
            feet = 0;
            inches = 0;
        }
        Distance(int i, int f)
        {
            feet = f;
            inches = i;
        }
        void DisplayDistance()
        {
            cout << "F: " << feet << " I:" << inches <<endl;
        }
        Distance operator-()
        {
            feet = -feet;
            inches = -inches;
            return Distance(feet,inches);        
        }
};

int main(int argc, char** argv) {
    Distance D1(11, 10), D2(-5, 11);
    -D1;
    D1.DisplayDistance();
    -D2;
    D2.DisplayDistance();
    return 0;
}

