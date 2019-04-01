#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    // local variable declaration:
    char grade = 'D';
    
    switch(grade){
        case 'A':
            cout << "Excellent Work!" << endl;
            break;
        case 'B':
            cout << "Good Work!" << endl;
            break;
        case 'C':
            cout << "Nice Work!" << endl;
            break;
        case 'D':
            cout << "Show Some More Efforts" << endl;
            break;
        default:    
            cout << "Invalid Grade" << endl;
    }
    cout << "Your Grade Is : " << grade << endl;
    return 0;
}

