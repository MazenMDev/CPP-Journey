#include <iostream>
#include <string>
using namespace std;

struct player {
    string name;  // Using string for better input handling
    int rank[5];
    float salary;
};

struct team {
    string name;
    int rank;
    player* p;  // Pointer for dynamic memory allocation
};

int main() {
    int numPlayers;
    
    // Ask user for the number of players
    cout << "Enter the number of players in the team: ";
    cin >> numPlayers;
    
    // Validate input
    if (numPlayers <= 0) {
        cout << "Invalid number of players!" << endl;
        return 1;
    }

    team t;
    t.p = new player[numPlayers];  // Allocate memory dynamically

    // Input team name and rank
    cout << "Enter team name: ";
    cin.ignore();  // Ignore leftover newline character
    getline(cin, t.name);
    
    cout << "Enter team rank: ";
    cin >> t.rank;

    // Input player details
    for (int i = 0; i < numPlayers; i++) {
        cout << "\nEnter details for player " << i + 1 << ":\n";
        
        cout << "Name: ";
        cin.ignore();
        getline(cin, t.p[i].name);
        
        cout << "Enter 5 rank values: ";
        for (int j = 0; j < 5; j++) {
            cin >> t.p[i].rank[j];
        }

        cout << "Salary: ";
        cin >> t.p[i].salary;
    }

    // Display entered information
    cout << "\nTeam Name: " << t.name << "\nTeam Rank: " << t.rank << endl;
    cout << "\nPlayer Details:\n";
    
    for (int i = 0; i < numPlayers; i++) {
        cout << "----------------------\n";
        cout << "Player " << i + 1 << ":\n";
        cout << "Name: " << t.p[i].name << "\n";
        cout << "Ranks: ";
        for (int j = 0; j < 5; j++) {
            cout << t.p[i].rank[j] << " ";
        }
        cout << "\nSalary: $" << t.p[i].salary << "\n";
    }

    // Free dynamically allocated memory
    delete[] t.p;

    cout << "\nMemory cleared. Program finished successfully!" << endl;

    return 0;
}
