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

    // Calculate average salary
    float totalSalary = 0;
    for (int i = 0; i < numPlayers; i++) {
        totalSalary += t.p[i].salary;
    }
    float avgSalary = totalSalary / numPlayers;

    // Find highest-ranked player (sum of rank array)
    int highestRankIndex = 0;
    int highestRankScore = 0;

    for (int i = 0; i < numPlayers; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += t.p[i].rank[j];
        }
        if (sum > highestRankScore) {
            highestRankScore = sum;
            highestRankIndex = i;
        }
    }

    // Display team information
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

    cout << "\nAverage Team Salary: $" << avgSalary << endl;
    cout << "Highest Ranked Player: " << t.p[highestRankIndex].name << " (Score: " << highestRankScore << ")\n";

    // Search for a player
    string searchName;
    cout << "\nEnter a player name to search: ";
    cin.ignore();
    getline(cin, searchName);
    
    bool found = false;
    for (int i = 0; i < numPlayers; i++) {
        if (t.p[i].name == searchName) {
            cout << "Player Found: " << t.p[i].name << "\nSalary: $" << t.p[i].salary << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Player not found!\n";
    }

    delete[] t.p;
    cout << "\nMemory cleared. Program finished successfully!" << endl;

    return 0;
}
