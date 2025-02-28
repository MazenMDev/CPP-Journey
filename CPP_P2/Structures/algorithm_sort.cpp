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
    const int size = 5;
    car cars[size];

    for(int i=0; i<size; i++){
        cin>>cars[i].brand;
        cin>>cars[i].model;
        cin>>cars[i].price;
    }

    sort(cars, cars +size, comparebyprice);
    for(int i=0; i<size; i++){
        cout << cars[i].brand << " " << cars[i].model << " " << cars[i].price << endl;  
    }
}