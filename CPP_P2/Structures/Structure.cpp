#include <iostream>
using namespace std;

struct player
{
    char name[50];  // Changed from char to char array for proper string input
    int rank[5];
    float salary;
};

struct team
{
    char name[50]; // Team name should also be an array to hold full names
    int rank;
    player* p;  // Pointer to dynamically allocated players
};

int main(){
    int yi;
    team t;
    t.p = new player[100];  // Dynamically allocate memory for 100 players

    for(int i = 0; i < 100; i++){
        cin >> t.p[i].name;  // Input player name
        for(int j = 0; j < 5; j++){
            cin >> t.p[i].rank[j];  // Input player ranks
        }
        cin >> t.p[i].salary;  // Input salary
    }

    // Free dynamically allocated memory
    delete[] t.p;

    return 0;
}
