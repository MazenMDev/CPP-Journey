#include <iostream>
using namespace std;

int main() {
    int x[4][4]; // 4x4 puzzle grid
    int posr, posc; // Position of the empty cell (represented by 0)
    int r, c;

    // Input the puzzle and locate the empty cell
    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < 4; c++) {
            cin >> x[r][c];
            if (x[r][c] == 0) {
                posr = r;
                posc = c;
            }
        }
    }

    // Infinite loop to handle the user's moves
    for (;;) {
        cout << "Enter the Selected cell (r,c): ";
        cin >> r >> c;

        // Keep asking for input until the user selects a valid adjacent cell
        for (;;) {
            if ((r == posr && c == posc + 1) || 
                (r == posr && c == posc - 1) || 
                (r == posr + 1 && c == posc) || 
                (r == posr - 1 && c == posc)) {
                break; // Valid move
            } else {
                // Invalid move, ask again
                cin >> r >> c;
            }
        }

        // Swap the selected tile with the empty cell
        x[posr][posc] = x[r][c];
        x[r][c] = 0;
        posr = r;
        posc = c;

        // Check if the puzzle is solved
        int count = 1;
        for (int r = 0; r < 4; r++) {
            for (int c = 0; c < 4; c++) {
                if (x[r][c] == count) {
                    count++;
                } else if (r != 3 || c != 3) {
                    count = -1; // Not solved
                    break;
                }
            }
            if (count == -1) {
                break;
            }
        }

        // Win condition: numbers 1-15 in order and 0 at the bottom-right
        if (count == 16 && x[3][3] == 0) {
            break;
        } else {
            cout << "Try again";
        }
    }

    cout << endl;
    cout << "Puzzle has been sorted\n";
}
