#include <cstdlib>

using namespace std;

int count;
extern void write_extern(void);

int main(int argc, char** argv) {
    count = 5;
    write_extern();
    return 0;
}

