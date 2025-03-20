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
    building *B;
};


int main() {
    int N;
    cin >> N;
    city* c = new city[N];
    int Max_cans = -99999;
    int Max_flats = -99999;
    for (int i = 0; i < N; i++) {
        cin >> c[i].name;
        cin >> c[i].number_of_b;
        c[i].B = new building[c[i].number_of_b];
        for (int k = 0; k < c[i].number_of_b; k++) {
            cin >> c[i].B[k].flats;
            cin >> c[i].B[k].card;
            cin >> c[i].B[k].plastic;
            cin >> c[i].B[k].can;
            if (c[i].B[k].flats > Max_flats)
            {
                Max_flats = c[i].B[k].flats;
                Max_cans = c[i].B[k].can;
            }
        }
    }

    char select_c;
    cin >> select_c; //by name
    int save = 0;
    for (int i = 0; i < N; i++) {
        if (select_c == c[i].name)
        {
            for (int k = 0; k < c[i].number_of_b; k++) {
                save += c[i].B[k].plastic;
            }
            break;
        }

    }
    cout << save << endl;

    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int k = 0; k < c[i].number_of_b; k++) {
            if (c[i].B[k].flats < 10)
            {
                if (c[i].B[k].can > Max_cans)
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    for (int i = 0; i < N; i++) {
        delete[] c[i].B;
    }
    delete[] c;

}