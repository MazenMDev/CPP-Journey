#include <iostream>
using namespace std;

struct player
{
    char name;
    int rank[5];
    float salary;
};

struct team
{
    char name;
    int rank;
    player p[100];
};

void main(){
    int yi;
    team t;
    for(int i=0; i<100; i++){
        cin>>t.p[i].name;
        for(int j=0; j<5; j++){
            cin>>t.p[i].rank[j];
        }
        cin>>t.p[i].salary;
    }

}
