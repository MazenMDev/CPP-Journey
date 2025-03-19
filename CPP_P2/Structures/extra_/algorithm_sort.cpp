#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Car {
    string brand;
    string model;
    float price;
};

bool compareByPrice(Car a, Car b) {
    return a.price < b.price;
}

int main() {
    int size;
    cout << "Enter the number of cars: ";
    cin >> size;

    Car* c = new Car[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter brand, model, and price of car " << i + 1 << ":\n";
        cin >> c[i].brand >> c[i].model >> c[i].price;
    }

    sort(c, c + size, compareByPrice);

    cout << "\nCars sorted by price:\n";
    for (int i = 0; i < size; i++) {
        cout << c[i].brand << " " << c[i].model << " $" << c[i].price << endl;
    }

    delete[] c;
}
