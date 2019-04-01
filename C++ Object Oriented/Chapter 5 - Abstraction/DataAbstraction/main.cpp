#include <cstdlib>
#include <iostream>

using namespace std;

class Add{
    private:
        int total;
    public:
        Add(int i = 0)
        {
            total = i;
        }
        // interface to outside world
        void addNum(int number)
        {
            total += number;
        }
        int getTotal()
        {
            return total;
        }
};

int main(int argc, char** argv) {
    Add a;
    a.addNum(10);
    a.addNum(20);
    cout << "Total : " << a.getTotal() << endl;
    return 0;
}

