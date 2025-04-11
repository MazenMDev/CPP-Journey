#include <iostream>
using namespace std;

void movehero(char move, int& r, int& c) {
	if (move == 'w')
		r--;
	else if (move == 's')
		r++;
	else if (move == 'a')
		c--;
	else if (move == 'd')
		c++;
}

int main() {
	char x[5][5] = {
		{'#','_','@','#','_'},
		{'_','#','#','_','_'},
		{'_','_','#','#','#'},
		{'_','_','#','_','_'},
		{'_','^','_','_','_'}
	};
	for (int r = 0; r < 5; r++) {
		for (int c = 0; c < 5; c++) {
			cout << x[r][c] << " ";
		}
		cout << endl;
	}
	//
	//
	char move;
	int movever, movehor;
	int z;
	int r = 4;
	int c = 1;	
	movever = r;
	movehor = c;
	for (;;) {
		cin >> move;
		r = movever;
	    c = movehor;
		movehero(move, movever, movehor);
		if (x[movever][movehor] != '#')
		{
			z = x[movever][movehor];
			x[movever][movehor] = x[r][c];
			x[r][c] = z;
		}
		cout << endl;
		cout << movever << " " << movehor << endl << endl;
		for (int r = 0; r < 5; r++) {
			for (int c = 0; c < 5; c++) {
				cout << x[r][c] << " ";
			}
			cout << endl;
		}
	}

}