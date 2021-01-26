#include <iostream>
#include <string>
using namespace std;

int main() {

	int t = 0;
	cin >> t;

	for (int test = 0; test < t; test++) {
		int n = 0;
		string str = "";
		cin >> n >> str;

		n--;

		str.erase(n,1);
		cout << str << endl;
	}
}
