#include <iostream>
using namespace std;


int main(){
    int **x;
    int **y;
    int m,n;
    
    cin>>m>>n;
    x = new int *[m];
    for(r=0; r<m;r++){
        x[r] = new int [n];
    }

    for(r=0; r<m ;r++){
        for(c=0; c< n ;c++){
            cin>>x[r][c];
        }
    }

    y = new int *[m];
    for(r=0; r<m;r++){
        y[r] = new int [n];
    }
    
    for(r=0; r<m ;r++){
        for(c=0; c< n ;c++){
            cin>>y[r][c];
        }
    }
}