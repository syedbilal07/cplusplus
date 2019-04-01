#include <cstdlib>
#include <iostream>
using namespace std;

// Function declaration
void func(void);
static int count = 10; /* Global variable */
// Function definition
void func(void){
    static int i = 5; // local static variable
    i++;
    std::cout << "i is : " << i; // std:: stands for standard and it is same as cout. std means we are using namespace std.
    std::cout << " and count is : " << count << std::endl;
}
int main(int argc, char** argv) {
   while(count--){
        func();
    }
}

