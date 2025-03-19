#include <iostream>
using namespace std;
 
struct term
{
	int conf;
	int power;
	int value;
	char name;
};

struct poly {
	int number;
	term* t;
};

int main() {
	int N;
	cout << "Enter number of equations: ";
	cin >> N;
	poly* p = new poly[N];
	for (int i = 0; i < N; i++) {
		cout << endl;
		cout << "Equations number " << i + 1 << ": " << endl;
		cout << "Enter number of terms: ";
		cin >> p[i].number;
		p[i].t = new term[p[i].number];
		for (int k = 0; k < p[i].number; k++) {
			cout << "Enter the coefficient: ";
			cin >> p[i].t[k].conf;
			cout << "Enter the power: ";
			cin >> p[i].t[k].power;
			cout << "Enter the value: ";
			cin >> p[i].t[k].value;
			cout << "Enter the name: ";
			cin >> p[i].t[k].name;
		}
	}
	int g = 1;
	char name1;
	cout << "Enter the selected variable: ";
	cin >> name1;
	int res, new_power;
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < p[i].number; k++){
			if (name1 == p[i].t[k].name)
			{
				res = (p[i].t[k].conf)*(p[i].t[k].power);
				new_power = p[i].t[k].power - 1;
				if (new_power == 0)
				{
					cout << res;
				}
				else
				{
					cout << res << p[i].t[k].name << "^" << new_power;
				}
				if (k == (p[i].number - 1))
				{
					break;
				}
				cout << " + ";
			}
		}
		cout << endl;
	}
	int s_power;
	char s_name;
	cout << endl;
	cout << "Enter Selected power: ";
	cin >> s_power;
	cout << "Enter Selected name: ";
	cin >> s_name;
	int result = -1;
	int nu;
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < p[i].number; k++) {
			if (s_name == p[i].t[k].name && s_power == p[i].t[k].power)
			{
				nu = p[i].t[k].value;
				for (int l = 1; l < p[i].t[k].power; l++) {
					nu = p[i].t[k].value * nu;
				}
				result = nu * p[i].t[k].conf;
				cout << result << endl;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		delete[]p[i].t;
	}
	delete[]p;

}