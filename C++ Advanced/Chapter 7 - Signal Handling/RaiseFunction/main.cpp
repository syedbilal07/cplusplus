#include <cstdlib>
#include <iostream>
#include <csignal>

using namespace std;

void signalHandler(int signum)
{
    cout << "Interrupt Signal (" << signum << ") Received" << endl;
    // cleanup and close up stuff here  
    // terminate program  
    exit(signum);
}

int main(int argc, char** argv) {
    int i = 0;
    signal(SIGINT, signalHandler);
    while(++i)
    {
        cout << "Going To Sleep" << endl;
        if(i == 3)
        {
            raise(SIGINT);
        }
    }
    return 0;
}

