#include <cstdlib>
#include <iostream>

using namespace std;

namespace first_space{
    void func()
    {
        cout << "Inside First Space" << endl;
    }
};

namespace second_space{
    void func()
    {
        cout << "Inside Second Space" << endl;
    }
};

int main(int argc, char** argv) {
    using namespace first_space;
    // This calls function from first name space.
    func();
    return 0;
}

