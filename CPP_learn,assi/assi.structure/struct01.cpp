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
	cin >> N;
	poly* p = new poly[N];
	for (int i = 0; i < N; i++) {
		cin >> p[i].number;
		p[i].t = new term[p[i].number];
		for (int k = 0; k < p[i].number; k++) {
			cin >> p[i].t[k].conf >> p[i].t[k].power >> p[i].t[k].value >> p[i].t[k].name;
		}
	}
	char name1;
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
				if (k != (p[i].number - 1))
				{
					cout << " + ";
				}
			}
		}
		cout << endl;
	}
	int s_power;
	char s_name;
	cin >> s_power >> s_name;
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
