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

    l = new int[m];
    z = new int *[m];

    for(int r=0; r<m; r++){
        ct = 0;
        for(int c=0; c<n; c++){
            if (x[r][c] == 0)
            {
                if (ct == 0)
                {
                    pos1 = c;
                }
                else pos2 = c;
                
                ct ++;
            }
            
        }
        len = pos2 - pos1 - 1;

        z[r] = new int [len *z] ;
        a = 0;
        l[r] = len *z;
        for(int c=pos1; c<pos2; c++){
            z[r][a++] = x[r][c];
        }
        for(k=pos1; k<pos2; k++){
            z[r][a++] = y[r][k];
        }
    }
}