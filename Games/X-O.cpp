#include <iostream>
using namespace std;

int main() {
    char x[3][3];
    int row, col;
    int X, O;
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            x[r][c] = ' ';
        }
    }

    for (int i = 0; ; i++) {
        X = 0;
        O = 0;
        if (i % 2 == 0){
            cout << "X turn" << endl;
            X = 1;
        }
        else{
            cout << "O turn" << endl;
            O = 1;
        }


        cout << "Choose a (row, col): ";
        cin >> row >> col;



        if ((x[row][col] != ' ') || (row > 2 || row < 0) || (col > 2 || col < 0))
        {
            while ((x[row][col] != ' ') || (row > 2 || row < 0) || (col > 2 || col < 0))
            {
                cout << "Wrong select-- Try again: ";
                cin >> row >> col;
            }
        }
        if (X == 1)
            x[row][col] = 'x';
        else
            x[row][col] = 'o';
            


        cout << endl << x[row][col] << endl;

        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) {
                cout << x[r][c] << "|";
            }
            cout << endl;
        }

    }

    if (true)
    {
        cout << "x won" << endl;
    }
    if (true)
    {
        cout << "o won" << endl;
    }

}