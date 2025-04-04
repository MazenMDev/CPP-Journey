#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));  // Seed the random number generator
    int x = 1;

    for (;;) {  // Infinite loop until we find 5
        x = (rand() % 10) + 1;
        cout << "The number is: " << x << endl;
        
        this_thread::sleep_for(chrono::seconds(3));  // Correct usage
        
        if (x == 5) {
            break;
        }

        cout << "Wait 3 seconds to generate again..." << endl;
        system("cls");
    }

    cout << "We found it! :)" << endl;
    return 0;
}
