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
            inches = i;
            feet = f;
        }
        friend ostream &operator<<(ostream &output, const Distance &D)
        {
            output << "F : " << D.feet << " I : " << D.inches;
            return output;
        }
        friend istream &operator>>(istream &input, Distance &D)
        {
            input >> D.feet >> D.inches;
            return input;
        }
};

int main(int argc, char** argv) {
    Distance D1(11,10), D2(5,11), D3;
    cout << "Enter The Value Of Object : " << endl;
    cin >> D3;
    cout << "First Distance : " << D1 << endl;
    cout << "Second Distance : " << D2 << endl;
    cout << "Third Distance : " << D3 << endl;
    return 0;
}

