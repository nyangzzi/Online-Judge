#include <iostream>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string a = "", b = "", c = "", d = "";
	cin >> a >> b >> c >> d;

	a += b;
	c += d;

	long long ab = 0, cd = 0;

	for (int i = 0; i < a.size(); i++) {
		ab *= 10;
		ab += a[i]- '0';
	}

	for (int i = 0; i < c.size(); i++) {
		cd *= 10;
		cd += c[i] - '0';
	}

	cout << ab + cd << endl;
}
