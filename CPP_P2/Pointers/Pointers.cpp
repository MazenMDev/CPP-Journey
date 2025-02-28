#include <iostream>
using namespace std;
int main(){
    int y = 10;
    int *w = &y;
    int **q = &w;
    cout << y << endl; // cout y value
    cout << w << endl; // address of y
    cout << &w << endl; // address of w
    cout << *w << endl; // go to w and see the address it carries and see the value this address
    cout << **q << endl; // go to q and see the address it carries (w) go to (w) and see what it carries (address of y) go to (y) and see the value of it
}