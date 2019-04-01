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
    // register signal SIGINT and signal handler  
    signal(SIGINT, signalHandler);
    while(1){
        cout << "Going To Sleep" << endl;
        // this program will run forever untill you press ctrl + c to see signal interruption
    }
    return 0;
}

