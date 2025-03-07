#include <iostream>
using namespace std;

struct chicken
{
	char gender;
	int age;
	char status;
};

struct farms
{
	int nofchicken;
	chicken* ch;
	char city;
};

int main() {
	int n;
	cin >> n; //number of farms
	farms* farm = new farms[n];
	for (int i = 0; i < n; i++) {
		cin >> farm[i].nofchicken;
		cin >> farm[i].city;
		farm[i].ch = new chicken[farm[i].nofchicken];
		for (int k = 0; k < farm[i].nofchicken; k++) {
			cin >> farm[i].ch[k].gender;
			cin >> farm[i].ch[k].age;
			cin >> farm[i].ch[k].status;
		}
	}

	int s_city;
	cin >> s_city;
	int nof_farms = -1;
	for (int i = 0; i < n; i++) {
		if (s_city == farm[i].city)
		{
			nof_farms = n;
			break;
		}
	}
	cout << nof_farms << endl;

	int s_farm;
	cin >> s_farm;
	int count = 0;
	int res;
	for (int i = 0; i < n; i++) {
		if (i == s_farm)
		{
			for (int k = 0; k < farm[i].nofchicken; k++) {
				if (farm[i].ch[k].status == 'y')
				{
					count++;
				}
			}
		}
	}

	res = count / farm[s_farm].nofchicken;
	res = res * 100;
	cout << res << "%" << endl;
}