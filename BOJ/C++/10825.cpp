#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct person {
	string name = "";
	int korean = 0;
	int english = 0;
	int math = 0;
};

bool cmp(person& x, person& y) {
	if (x.korean == y.korean && x.english == y.english && x.math == y.math) return x.name < y.name;
	else if (x.korean == y.korean && x.english == y.english) return x.math > y.math;
	else if (x.korean == y.korean) return x.english < y.english;
	else return x.korean > y.korean;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n = 0;
	cin >> n;

	vector<person> p;

	for (int i = 0; i < n; i++) {
		string name = "";
		int korean = 0, english = 0, math = 0;
		cin >> name >> korean >> english >> math;
		
		person v;
		v.name = name;
		v.korean = korean;
		v.english = english;
		v.math = math;

		p.push_back(v);
	}

	sort(p.begin(), p.end(), cmp);
	
	for (int i = 0; i < p.size(); i++) {
		cout << p[i].name << "\n";
	}

}
