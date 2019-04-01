#include <cstdlib>
#include <iostream>
#include <exception>

using namespace std;

struct MyException : public exception
{
    const char* what() const throw()
    {
        return "C++ Exception";
    }
};

int main(int argc, char** argv) {
    try{
        throw MyException();
    }
    catch(MyException& e)
    {
        std::cout << "MyException Caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch(std::exception& e)
    {
        //Other errors
    }
    return 0;
}

