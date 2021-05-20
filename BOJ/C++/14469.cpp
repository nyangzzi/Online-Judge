#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct cow {
	int start = 0;
	int during = 0;
	int end = 0;
};

bool cmp(cow& x, cow& y) {
	return x.start< y.start;
}

int main() {

	int n = 0;
	cin >> n;

	vector<cow> line;

	while (n--) {
		int s = 0, d = 0;
		cin >> s >> d;
		
		cow c;
		c.start = s;
		c.during = d;
		c.end = s + d;

		line.push_back(c);
	}

	sort(line.begin(), line.end(), cmp);


	int now = 0;
	for (int i = 0; i < line.size(); i++) {
		//cout << line[i].start << " " << line[i].during << " " << line[i].end << endl;
		if (now < line[i].start) {
			now = line[i].end;
		}
		else if (now > line[i].start) {
			now = line[i].end + (now - line[i].start);
		}
		else {
			now = line[i].end;
		}
		
	}

	cout << now << endl;

	system("pause");
	
}
