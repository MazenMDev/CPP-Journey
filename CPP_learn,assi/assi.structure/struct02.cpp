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
	cout << "Number of inbox: ";
	cin >> N;
	inbox* box = new inbox[N];
	for (int i = 0; i < N; i++) {
		cout << "Number of mails: ";
		cin>>box[i].number;
		box[i].ma = new mail[box[i].number];
		for (int k = 0; k < box[i].number; k++) {
			cout << "Enter info of mail number " << i + 1 << ":" << endl;
			cout << "Name of sender: ";
			cin>>box[i].ma[k].nameofsender;
			cout << "date: ";
			cin>>box[i].ma[k].date;
			cout << "text: ";
			cin>>box[i].ma[k].text;
			cout << "Enter the range of risk for example(15% : 35%): ";
			cin >> box[i].ma[k].risk1 >> dot >> dot >> box[i].ma[k].risk2 >> dot;
			cout << "Name of destination: ";
			cin>>box[i].ma[k].nameofdes;
		}
	}
	int s_risk, s_risk2;
	cout << "Enter the selected range of risk for example (15% : 35%): ";
	cin >> s_risk >> dot >> dot >> s_risk2 >> dot;
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < box[i].number; k++) {
			if ((box[i].ma[k].risk1 >= s_risk) && (box[i].ma[k].risk2 <= s_risk2))
			{
				cout << "The text: ";
				cout << box[i].ma[k].text << endl;
			}
		}
	}
	cout << "///////////////////////";
	cout << endl;
	int s_inbox;
	cout << "Enter the selected inbox: ";
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
	cout << "Number of mails that has >50% risk in this inbox: ";
	cout << count;

	for (int i = 0; i < N; i++) {
		delete[]box[i].ma;
	}
	delete[]box;
}