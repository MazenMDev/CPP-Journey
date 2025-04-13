#include <iostream>
using namespace std;

int main() {
    char x[3][3];
    int row, col;

    // Initialize board
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            x[r][c] = ' ';
        }
    }

    int ch = 0;
    char currentPlayer;

    for (int i = 0; ; i++) {
        currentPlayer = (i % 2 == 0) ? 'x' : 'o';
        cout << (currentPlayer == 'x' ? "X turn" : "O turn") << endl;

        // Input
        cout << "Choose a (row, col): ";
        cin >> row >> col;

        // Input validation
        while ((row < 0 || row > 2 || col < 0 || col > 2) || x[row][col] != ' ') {
            cout << "Wrong select-- Try again: ";
            cin >> row >> col;
        }

        x[row][col] = currentPlayer;

        // Print board
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) {
                cout << x[r][c] << "|";
            }
            cout << endl;
        }

        // Check rows and columns
        for (int i = 0; i < 3; i++) {
            if (x[i][0] != ' ' && x[i][0] == x[i][1] && x[i][1] == x[i][2]) ch = 1;
            if (x[0][i] != ' ' && x[0][i] == x[1][i] && x[1][i] == x[2][i]) ch = 1;
        }

        // Check diagonals
        if (x[0][0] != ' ' && x[0][0] == x[1][1] && x[1][1] == x[2][2]) ch = 1;
        if (x[0][2] != ' ' && x[0][2] == x[1][1] && x[1][1] == x[2][0]) ch = 1;

        if (ch == 1) break;
    }

    cout << currentPlayer << " won" << endl;
}
