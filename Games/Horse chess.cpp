#include <iostream>
using namespace std;

int main() {
	char x[8][8];
	for (int r = 0; r < 8; r++) {
		for (int c = 0; c < 8; c++) {
			x[r][c] = ' ';
		}
	}
	int ct = 0;

	int rowKnight, colKnight;
	cin >> rowKnight >> colKnight;
	x[rowKnight][colKnight] = '^';
	int rowcell, colcell;
	cin >> rowcell >> colcell;
	x[rowcell][colcell] = '@';

	int moverow, movecol;
	int rowdiff, coldiff;
	for (int r = 0; r < 8; r++) {
		for (int c = 0; c < 8; c++) {
			cout << x[r][c] << "|";
		}
		cout << endl;
	}
	for (;;) {
		cout << "Enter valid move from (0-7) , (0-7): ";
		cin >> moverow >> movecol;
		if (rowKnight > moverow)
			rowdiff = rowKnight - moverow;
		else
			rowdiff = moverow - rowKnight;
		if (colKnight > movecol)
			coldiff = colKnight - movecol;
		else
			coldiff = movecol - colKnight;
		if (((moverow >= 0 || moverow < 9) && (movecol >= 0 || movecol < 9)) && ((rowdiff == 1 && coldiff == 2) || (rowdiff == 2 && coldiff == 1)))
		{
			x[moverow][movecol] = x[rowKnight][colKnight];
			x[rowKnight][colKnight] = ' ';
			rowKnight = moverow;
			colKnight = movecol;
			for (int r = 0; r < 8; r++) {
				for (int c = 0; c < 8; c++) {
					cout << x[r][c] << "|";
				}
				cout << endl;
			}
			ct++;
		}

		if (rowKnight == rowcell && colKnight == colcell)
		{
			cout << "We found the target cell!" << endl;
			cout << "Number of moves: " << ct << endl;
			break;
		}
	}

}