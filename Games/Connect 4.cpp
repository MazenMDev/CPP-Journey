#include <iostream>
using namespace std;




int main() {
	char x[11][11];
	int number;
	int h, red, blue, ct;
	int gameover = 0;
	int winr = 0;
	int winb = 0;
	for (int i=0; ;i++) {
		h = 11;
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
		for (int r = 0; r < 11; r++) {
			for (int c = 0; c < 11; c++) {
				cout << x[r][c] << ' ';
			}
			cout << endl;
		}
		for (int r = 1; r < 11; r++) {
			for (int c = 1; c < 11; c++) {
				if (x[r][c] == x[r][c+1] == x[r][c+2] == x[r][c+3])
				{
					if (x[r][c] == 'R')
						winr = 1;
					else
						winb = 1;
					gameover = 1;
					break;
				}
				if (x[r][c] == x[r + 1][c] == x[r + 2][c] == x[r + 3][c]) 
				{
					if (x[r][c] == 'R')
						winr = 1;
					else
						winb = 1;
					gameover = 1;
					break;
				}
				if (x[r][c] == x[r + 1][c - 1] == x[r + 2][c - 2] == x[r + 3][c - 3])
				{
					if (x[r][c] == 'R')
						winr = 1;
					else
						winb = 1;
					gameover = 1;
					break;
				}
				if (x[r][c] == x[r + 1][c + 1] == x[r + 2][c + 2] == x[r + 3][c + 3])
				{
					if (x[r][c] == 'R')
						winr = 1;
					else
						winb = 1;
					gameover = 1;
					break;
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