#include <iostream>
using namespace std;
int main(){
    int x[20][20];
    int posr,posc;
    int tot = 0;
    for(int r=0; r<20; r++){
        for(int c=0; c<20; c++){
            cin>>x[r][c];
        }
    }
    
    for(;;){
        for(int r=0; r<20; r++){
            for(int c=0; c<20; c++){
                posr = r;
                posc = c;
                if (true)/*condition*/
                {
                    /* the condition of range*/
                    for(;;){
                        tot += x[posc][posr];
                        posr++;
                        if (posr == c)
                        {
                            posc--;
                        }
                        if (x[posc][posc] == x[r][c])
                        {
                            break;
                        }
                        
                    }
                }
                
            }
        }
        if((posr+1==4 && posc-1==0 )&&(posr+1==4 && posc+1==4 )){
            break;
        }
    }



    for(; ;){
        for(; ;){
            // the triangle with the largest sum
        }
    }
}