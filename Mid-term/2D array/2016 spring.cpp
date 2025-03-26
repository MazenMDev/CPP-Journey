#include <iostream>
using namespace std;

int main() {
    int** x; // Pointer to store 2D array dynamically
    int** y; // Pointer to store processed 2D array
    int m, n; // Dimensions of the input matrix
    cin >> m >> n;

    // Allocate memory for matrix x
    x = new int* [m];
    for (int r = 0; r < m; r++) {
        x[r] = new int[n];
    }

    // Read matrix elements from input
    for (int r = 0; r < m; r++) {
        for (int c = 0; c < n; c++) {
            cin >> x[r][c];
        }
    }

    // Extract the last two elements from the last row
    int v1 = x[m - 1][n - 2];
    int v2 = x[m - 1][n - 1];
    int posr = -1; // Row index where v1, v2 appear
    int posc = -1; // Column index of v1 in that row

    // Find the first occurrence of v1, v2 in the matrix
    for (int r = 0; r < m; r++) {
        for (int c = 0; c < n - 1; c++) { // Ensure c+1 is within bounds
            if (x[r][c] == v1 && x[r][c + 1] == v2) {
                posr = r; // Store the row index
                break;
            }
        }
        if (posr != -1) { // Stop searching once found
            break;
        }
    }

    int ctr = m - posr; // Number of rows for the new matrix y
    y = new int* [ctr]; // Allocate memory for y
    int* ly = new int[ctr]; // Store the width of each row in y

    int ry = 0; // Row index for y
    int c;
    int width;

    // Process the matrix and extract relevant parts
    for (int r = 0; r < m; r++) {
        for (c = 0; c < n - 1; c++) { // Ensure c+1 is within bounds
            if (x[r][c] == v1 && x[r][c + 1] == v2) {
                posc = c; // Store the column index
                break;
            }
        }
        if (c < n) { // Ensure valid width calculation
            width = n - (c + 2); // Compute width of new row
        }
        
        // Allocate memory for the new row in y
        y[ry] = new int[width];
        ly[ry] = width; // Store the row width
        
        int b = 0; // Column index for new row
        for (int c = posc + 2; c < n; c++) { // Copy elements after v1, v2
            y[ry][b++] = x[r][c];
        }
        ry++; // Move to the next row in y
    }

    // Output the new matrix y
    for (int i = 0; i < ry; i++) {
        for (int j = 0; j < ly[i]; j++) {
            cout << y[i][j] << " ";
        }
        cout << endl;
    }

    // Free allocated memory for x
    for (int r = 0; r < m; r++) {
        delete[] x[r];
    }
    delete[] x;

    // Free allocated memory for y
    for (int r = 0; r < ry; r++) {
        delete[] y[r];
    }
    delete[] y;
    delete[] ly;

    return 0;   
}