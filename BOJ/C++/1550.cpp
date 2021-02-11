#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string str = "";
	cin >> str;

	int num = 0;
	for (int i = str.size() - 1; i >= 0; i--) {
		int n = 0;
		if (str[i] >= 'A' && str[i] <= 'F') n = str[i] - 'A' + 10;
		else n = str[i] - '0';
		num += n * pow(16, str.size() - i - 1);
	}
	
	cout << num << endl;
}
