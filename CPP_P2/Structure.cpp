#include <iostream>
using namespace std;
struct player
{
    char name;
    int rank[5];
    float salary;
};

void main(){
    int yi;
    player p[100];
    for(int i=0; i<100; i++){
        cin>>p[i].name;
        for(int j=0; j<5; j++){
            cin>>p[i].rank[j];
        }
        cin>>p[i].salary;
    }

}
