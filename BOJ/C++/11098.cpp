#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct player{
	int c = 0;
	string name = "";
};

bool cmp(player& x, player& y) {
	return x.c < y.c;
}

int main() {
	
	int test = 0;
	cin >> test;

	while (test--) {
		int p = 0;
		cin >> p;

		vector<player> list;

		for (int i = 0; i < p; i++) {
			int c = 0;
			string name = "";
			cin >> c >> name;
			player pl;
			pl.c = c;
			pl.name = name;
			list.push_back(pl);
		}

		sort(list.begin(), list.end(), cmp);

		cout << list[list.size() - 1].name << endl;
	}
	
}
