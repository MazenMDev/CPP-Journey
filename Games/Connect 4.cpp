#include <iostream>
using namespace std;

int main() {
	char x[10][10];
	int number;
	int h, red, blue, ct;
	int gameover = 0;
	int winr = 0;
	int winb = 0;
	for (int r = 0; r < 10; r++) {
		for (int c = 0; c < 10; c++) {
			x[r][c] = ' ';
		}
	}
	for (int i = 0; ; i++) {
		h = 9;
		red = 0;
		blue = 0;
		ct = 0;
		if (i % 2 == 0)
		{
			cout << "Red Turn: " << endl;
			red = 1;
		}
		else
		{
			cout << "Blue Turn: " << endl;
			blue = 1;
		}
		// The above this is correct
		//
		//

		//fill the R and B
		cin >> number;
		if (x[h][number] != 'R' && x[h][number] != 'B')
		{
			ct = -1;
		}
		while (x[h][number] == 'R' || x[h][number] == 'B') {
			h--;
			if (x[h][number] != 'R' && x[h][number] != 'B')
			{
				ct = -1;
			}
		}
		if (ct == -1)
		{
			if (red == 1)
			{
				x[h][number] = 'R';
			}
			else
			{
				x[h][number] = 'B';
			}
		}
		//fill the R and B
		//
	
		//print
		for (int r = 0; r < 10; r++) {
			for (int c = 0; c < 10; c++) {
				cout << x[r][c] << " | ";
			}
			cout << endl;
		}
		//print
		//

		for (int r = 0; r < 10; r++) {
			for (int c = 0; c < 10; c++) {
				if (x[r][c] == x[r][c + 1] == x[r][c + 2] == x[r][c + 3])
				{
					cout << "ver" << endl;
					if (x[r][c] == 'R')
						winr = 1;
					else
						winb = 1;
					gameover = 1;
					break;
				}
				if (x[r][c] == x[r + 1][c] == x[r + 2][c] == x[r + 3][c])
				{
					cout << "hor" << endl;
					if (x[r][c] == 'R')
						winr = 1;
					else
						winb = 1;
					gameover = 1;
					break;
				}
				if (c > 2 && r < 7) {
					if (x[r][c] == x[r + 1][c - 1] == x[r + 2][c - 2] == x[r + 3][c - 3])
					{
						cout << "up right" << endl;
						if (x[r][c] == 'R')
							winr = 1;
						else
							winb = 1;
						gameover = 1;
						break;
					}
				}
				if (r < 7 && c < 7)
				{
					if (x[r][c] == x[r + 1][c + 1] == x[r + 2][c + 2] == x[r + 3][c + 3])
					{
						cout << "up left" << endl;
						if (x[r][c] == 'R')
							winr = 1;
						else
							winb = 1;
						gameover = 1;
						break;
					}
				}

			}
			if (gameover == 1) break;
		}
		if (gameover == 1)
			break;

	}
	cout << endl << "Game Over" << endl;
	if (winr == 1)
	{
		cout << "Red Won the game" << endl;
	}
	else if (winb == 1)
	{
		cout << "Blue Won the game" << endl;
	}
}