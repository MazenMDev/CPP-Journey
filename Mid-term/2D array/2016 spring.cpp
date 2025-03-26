#include <iostream>
using namespace std;
int main() {
	int** x;
	int** y;
	int m, n;
	cin >> m >> n;
	x = new int* [m];
	for (int r = 0; r < m; r++) {
		x[r] = new int[n];
	}
	for (int r = 0; r < m; r++) {
		for (int c = 0; c < n; c++) {
			cin >> x[r][c];
		}
	}

	int v1 = x[m - 1][n - 2];
	int v2 = x[m - 1][n - 1];
	int posr = -1;
	int posc = -1;
	for (int r = 0; r < m; r++) {
		for (int c = 0; c < n; c++) {
			if (x[r][c] == v1 && x[r][c+1] == v2)
			{
				posr = r;
				break;
			}
		}
		if (posr != -1)
		{
			break;
		}
	}
	int ctr = m - posr;
	y = new int* [ctr];
	int* ly = new int[ctr];

	int ry = 0;
	int c;
	int width;
	for (int r = 0; r < m; r++) {
		for (c = 0; c < n; c++) {
			if (x[r][c] == v1 && x[r][c+1] == v2)
			{
				posc = c; break;
			}
		}
		if (c<n)
		{
			width = n - (c + 2);
		}
		y[ry] = new int[width];
		ly[ry] = width;
		int b = 0;
		for (int c = posc + 2; c < n; c++) {
			y[ry][b++] = x[r][c];
		}
		ry++;
	}

    for(int i=0; i<ry; i++){
        for(int j=0; j<ly[i]; j++){
            cout << y[i][j] << " ";
        }
        cout << endl;
    }

    for(int r=0; r<m; r++){
        delete[] x[r];
    }
    delete[] x;

    for(int r=0; r<ry; r++){
        delete[] y[r];
    }
    delete[] y;
    delete[] ly;

    return 0;   
}