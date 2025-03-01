#include <iostream>
#include <string>
using namespace std;

struct player {
    string name;  
    int rank[5];
    float salary;
};

struct team {
    string name;
    int rank;
    player* p;
};

// Function to sort players by salary (descending order)
void sortBySalary(player* p, int numPlayers) {
    for (int i = 0; i < numPlayers - 1; i++) {
        for (int j = i + 1; j < numPlayers; j++) {
            if (p[i].salary < p[j].salary) {
                swap(p[i], p[j]);  // Swap players if out of order
            }
        }
    }
}

int main() {
    int numPlayers;
    
    cout << "Enter the number of players in the team: ";
    cin >> numPlayers;
    
    if (numPlayers <= 0) {
        cout << "Invalid number of players!" << endl;
        return 1;
    }

    team t;
    t.p = new player[numPlayers];

    cout << "Enter team name: ";
    cin.ignore();
    getline(cin, t.name);
    
    cout << "Enter team rank: ";
    cin >> t.rank;

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

    // Sort players by salary
    sortBySalary(t.p, numPlayers);

    // Display sorted player details
    cout << "\nPlayers sorted by salary (highest to lowest):\n";
    for (int i = 0; i < numPlayers; i++) {
        cout << "----------------------\n";
        cout << "Player " << i + 1 << ":\n";
        cout << "Name: " << t.p[i].name << "\n";
        cout << "Salary: $" << t.p[i].salary << "\n";
    }

    delete[] t.p;
    cout << "\nMemory cleared. Program finished successfully!" << endl;

    return 0;
}
