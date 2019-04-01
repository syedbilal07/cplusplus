#include <cstdlib>
#include <iostream>

using namespace std;

class Time{
    private:
        int minutes;
        int hours;
    public:
        Time()
        {
            hours = 0;
            minutes = 0;
        }
        Time(int h, int m)
        {
            hours = h;
            minutes = m;
        }
        void DisplayTime()
        {
            cout << "H: " << hours << " M:" << minutes <<endl;
        }
        // overloaded prefix ++ operator
        Time operator++()
        {
            ++minutes; // increment this object
            if(minutes >= 60)
            {
                ++hours;
                minutes -= 60;
            }
            return Time(hours,minutes);
        }
        // overloaded postfix ++ operator
        Time operator++(int)
        {
            // save the original value
            Time T(hours,minutes);
            // increment this object
            minutes++;
            if(minutes >= 60)
            {
                hours++;
                minutes -= 60;
            }
            // return old original value
            return T;
        }
};

int main(int argc, char** argv) {
    Time T1(11,59), T2(10,40);
    
    ++T1; // increment T1
    T1.DisplayTime(); // display T1
    ++T1; // increment T1 again
    T1.DisplayTime(); // display T1
    
    T2++;                    // increment T2
    T2.DisplayTime();        // display T2
    T2++;                    // increment T2 again
    T2.DisplayTime();        // display T2
    return 0;
}

