#include <iostream>
using namespace std;
int main(){
    int x[5][8];
    for(int r=0; r<5; r++){
        for(int c=0; c<8; c++){
            cin>>x[r][c];
        }
    }
    int number;
    cin>>number;

    int l = 0;
    int posr1,posr2,posc1,posc2;
    for(int r=0; r<5; r++){
        for(int c=0; c<8; c++){
            if (x[r][c] == number && l == 0)
            {
                posr1 = r;
                posc1 = c;
                l++;
            }
            if (x[r][c] == number)
            {
                posr2 = r;
                posc2 = c;
            }
        }
    }

    int tot = 0;
    for(int r=posr1; r<=posr2; r++){
        for(int c=posc1; c<=posc2; c++){
            tot += x[r][c];
        }
    }

    cout << tot << endl;
}