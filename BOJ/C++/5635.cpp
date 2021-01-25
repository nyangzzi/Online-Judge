#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

struct student {
	string name;
	int year;
	int month;
	int day;
};

bool cmp(student& x, student y) {
	if (x.year > y.year) return true;
	else if (x.year == y.year) {
		if (x.month > y.month) return true;
		else if (x.month == y.month) {
			if (x.day > y.day) return true;
		}
	}

	return false;

}

int main() {
	
	int n = 0;
	cin >> n;

	vector<student> sGroup;

	for (int i = 0; i < n; i++) {
		/*string name = "";
		int day = 0;
		int month = 0;
		int year = 0;
		cin >> name >> day >> month >> year;*/
		student s;
		cin >> s.name >> s.day >> s.month >> s.year;
		sGroup.push_back(s);

	}

	sort(sGroup.begin(), sGroup.end(), cmp);

	cout << sGroup[0].name << endl;
	cout << sGroup[n - 1].name << endl;

}
