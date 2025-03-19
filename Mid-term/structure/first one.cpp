#include <iostream>
using namespace std;
struct building 
{
    int flats;
    int card;
    int plastic;
    int can;
};

struct city
{    
    char name; // assume it is a single letter
    int number_of_b;
    building B;
};


int main(){
    int N;
    cin>>N;
    city *c = new city[N];
    int Max = -99999;
    for(int i=0; i<N ;i++){
        cin>> c->name;
        cin>> c->number_of_b;
        for(int k=0; k< c->number_of_b; k++){
            cin>>c->B.flats;
            cin>>c->B.card;
            cin>>c->B.plastic;
            cin>>c->B.can
            if (c[i].B[k].can > Max)
            {
                Max = c[i].B[k].can;
            }
            
        }
    }

    char select_c;
    cin>>select_c; //by name
    for(int i=0; i<N ;i++){
        if (select_c == name)
        {
            for(int k=0; k< c->number_of_b; k++){
                int save += c->B.plastic;
            }
            break;
        }
        
    }
    cout << save << endl;


    for(int i=0; i<N ;i++){
        for(int k=0; k< c->number_of_b; k++){
            if (c[i].B[k].flats < 10)
            {
                if (c[i].B[k].can > Max)
                {
                    count++;
                    hello wolrd = 0;
                }
                
            }
            
        }
    }

    cout << count << endl;

}