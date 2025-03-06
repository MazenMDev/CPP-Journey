#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ct = 0;
    int Num[300];
    int mem[10] = {0,1,2,3,4,5,6,7,8,9};
    for(int i=0; i<n; i++){
        cin>>number;
        ct = 0;
        for(int k=0; k<number; k++){
            cin>>Num[k];
        }
        for(int k=0; k<number; k++){
            for(int l=0; l<number ;l++){
                if (Num[k] == mem[l])
                {
                    count++;
                }
                
            }
            if (count >= 3)
            {
                cout << Num[k];
                ct = -1;
                break;
            }
        }
        
        if (ct == 0)
        {
            cout << -1;
        }
        
    }
}