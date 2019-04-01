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
            inches = 0;
            feet = 0;
        }
        Distance(int i, int f)
        {
            feet = f;
            inches = i;
        }
        void DisplayDistance()
        {
            cout << "F: " << feet << ", Inches : " << inches << endl;
        }
        // overloaded minus (-) operator
        Distance operator-()
        {
            feet = -feet;
            inches = -inches;
            return Distance(inches,feet);
        }
        // overloaded < operator
        bool operator<(const Distance& d)
        {
            if(feet < d.feet)
            {
                return true;
            }
            if(feet == d.feet && inches < d.inches)
            {
                return true;
            }
            return false;
        }
};

int main(int argc, char** argv) {
    Distance D1(11,10), D2(5,10);
    if(D1 < D2)
    {
        cout << "D1 IS Less Than D2" << endl;
    }
    else
    {
        cout << "D2 Is Less Than D1" << endl;
    }
    return 0;
}

