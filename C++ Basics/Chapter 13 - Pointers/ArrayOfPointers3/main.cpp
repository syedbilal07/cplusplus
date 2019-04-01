#include <cstdlib>
#include <iostream>

using namespace std;

const int MAX = 4;

int main(int argc, char** argv) {
    char *names[MAX] = {
      "Beenish Arif",
      "Sadia Iqbal",
      "Sana Khan",
      "Aniqa Siddiqi",
    };
    int i;
    
    for(i = 0; i < MAX; i++){
        cout << "Values Of names[" << i << "] : " << names[i] << endl;
    }
    return 0;
}

