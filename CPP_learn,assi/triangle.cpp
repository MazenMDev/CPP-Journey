#include <iostream>
using namespace std;
int main(){
    int x[20][20];
    int posr,posc,posr2,posc2;
    int tot = 0;
    for(int r=0; r<20; r++){
        for(int c=0; c<20; c++){
            cin>>x[r][c];
        }
    }
    

    int g =1;
    int h = 1;
    int max = -99999;
    int posdisplayr,posdisplayc,display_g;
    for(;;){
        for(int r=0; r<20; r++){
            for(int c=0; c<20; c++){
                posr = r+g;
                posc = c-g;
                posr2 = r+g;
                posc2 = c+g;
                if ((posr<20&&posc>=0) && (posr2<20&&posc2<20))/*condition*/
                {
                    /* the condition of range*/
                    for(;;){
                        tot += x[posr][posc];
                        posc++;
                        if (posc == posc2)
                        {
                            posr--;
                            posc--;
                        }
                        if (x[posr][posc] == x[r][c])
                        {
                            tot += x[r][c];
                            if (tot > max)
                            {
                                max = tot;
                                posdisplayr = r;
                                posdisplayc = c;
                                display_g = g;
                            }
                            break;
                        }
                        
                    }
                }
            }
        
        }
        g++;
        if((posr==19 && posc==0)&&(posr2==19 && posc2==19)){
            break;
        }
    }


int cl = 0;
    for(int r=posdisplayr ; ; r++){
        for(int c=posdisplayc-cl ; ; c++){
            cout << x[r][c] << " ";
            if (c == (posdisplayc+cl))
            {
                break;
            }
        }
        cl++;
        cout << endl;
    }

    cout << "The largest sum: " << max << endl;
}
