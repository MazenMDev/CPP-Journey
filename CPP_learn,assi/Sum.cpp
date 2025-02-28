#include <iostream>
using namespace std;
int main(){
    int x[100][200];
    cout << "Write the matrix:"<< endl;
    for(int r=0; r<100; r++){
        for(int c=0; c<200; c++){
            cin>>x[r][c];
        }
    }
    int number;
    cout << "Select the target number: ";
    cin>>number;

    int l = 0;
    int posr1,posr2,posc1,posc2;
    for(int r=0; r<100; r++){
        for(int c=0; c<200; c++){
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

    cout << "The Sum is: " << tot << endl;
}