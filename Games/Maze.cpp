#include <iostream>
using namespace std;

void movehero(char move, int& row, int& col, int& ct) {
	if (move == 'w') {
		row--;
		ct = 0;
	}
	else if (move == 's') {
		row++;
		ct = 1;
	}
	else if (move == 'a'){
		col--;
		ct = 2;
	}
	else if (move == 'd') {
		col++;
		ct = 3;
	}
}

int main() {
	char x[20][20];
	int checkhero = 0;
	int checktarget = 0;
	for (int r = 0; r < 5; r++) {
		for (int c = 0; c < 5; c++) {
			cin >> x[r][c];
			if (x[r][c] == '^')
				checkhero++;
			if (x[r][c] == '@')
				checktarget++;
			if (checkhero > 1)
			{
				cin >> x[r][c];
				while (x[r][c] == '^')
				{
					cin >> x[r][c];
				}
			}
			if (checktarget> 1)
			{
				cin >> x[r][c];
				while (x[r][c] == '@')
				{
					cin >> x[r][c];
				}
			}
			
		}
	}

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
	int ct = -1;
	movever = r;
	movehor = c;
	for (;;) {
		cin >> move;
		r = movever;
	    c = movehor;
		movehero(move, movever, movehor,ct);
		if (x[movever][movehor] != '#' && movever >= 0 && movever < 5 && movehor >= 0 && movehor < 5)
		{
			z = x[movever][movehor];
			x[movever][movehor] = x[r][c];
			x[r][c] = z;
		}
		else 
		{
			cout << endl;
			cout << ct << endl;
			cout << endl;
			if (ct == 0)
				movever++;
			else if (ct == 1)
				movever--;
			else if (ct == 2)
				movehor++;
			else if (ct == 3)
				movehor--;
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