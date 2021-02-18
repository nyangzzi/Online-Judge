#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct person {
	int age = 0;
	string name = "";
	int num = 0;
};

bool cmp(person& x, person& y) {
	if (x.age < y.age) return true;
	else if (x.age == y.age) return x.num < y.num;
	else return false;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n = 0;
	cin >> n;

	vector<person> p;

	for (int i = 0; i < n; i++) {
		int age = 0;
		string name = "";
		cin >> age >> name;
		
		person v;
		v.age = age;
		v.name = name;
		v.num = i;

		p.push_back(v);
	}
	
	sort(p.begin(), p.end(), cmp);
	
	for (int i = 0; i < p.size(); i++) {
		cout << p[i].age << " " << p[i].name <<"\n";
	}
}
