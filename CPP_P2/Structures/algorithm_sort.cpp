#include <iostream>
#include <algorithm>
using namespace std;

struct car
{
    string brand;
    string model;
    float price;
};

bool comparebyprice(car a, car b){
    return a.price < b.price;
}

int main(){
    int size;
    cin>>size;
    car* c = new car[size];

    for(int i=0; i<size; i++){
        cin>>c[i].brand;
        cin>>c[i].model;
        cin>>c[i].price;
    }

    sort(c, c +size, comparebyprice);
    for(int i=0; i<size; i++){
        cout << c[i].brand << " " << c[i].model << " " << c[i].price << endl;  
    }

    delete[]c;
}