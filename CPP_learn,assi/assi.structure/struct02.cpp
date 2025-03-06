#include <iostream>
using namespace std;

struct mail{
	char nameofsender;
	int date;
	char text;
	int risk1, risk2;
	char nameofdes;
};

struct inbox{
	int number;
	mail* ma;
};

int main() {
	char dot;
	int N;
	cin >> N;
	inbox* box = new inbox[N];
	for (int i = 0; i < N; i++) {
		cin >> box[i].number;
		box[i].ma = new mail[box[i].number];
		for (int k = 0; k < box[i].number; k++) {
			cin >> box[i].ma[k].nameofsender;
			cin >> box[i].ma[k].date;
			cin >> box[i].ma[k].text;
			cin >> box[i].ma[k].risk1 >> dot >> dot >> box[i].ma[k].risk2 >> dot;
			cin >> box[i].ma[k].nameofdes;
		}
	}
	int s_risk, s_risk2;
	cin >> s_risk >> dot >> dot >> s_risk2 >> dot;
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < box[i].number; k++) {
			if ((box[i].ma[k].risk1 >= s_risk) && (box[i].ma[k].risk2 <= s_risk2))
			{
				cout << box[i].ma[k].text << endl;
			}
		}
	}
	int s_inbox;
	cin >> s_inbox;
	int count = 0;
	for (int i = 0; i < N; i++) {
		if (s_inbox == i)
		{
			for (int k = 0; k < box[i].number; k++) {
				if (box[i].ma[k].risk2 > 50)
				{
					count++;
				}
			}
		}
	}
	cout << count;

	for (int i = 0; i < N; i++) {
		delete[]box[i].ma;
	}
	delete[]box;
}
