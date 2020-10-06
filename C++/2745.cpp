#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

	string str="";
	int n = 0;
	cin >> str >> n;

	long long num = 0;
	long long sum = 0;
	for (int i = str.size() - 1; i >= 0; i--) {
		if (str[i] >= '0' && str[i] <= '9') {
			sum += (str[i] - '0') * pow(n, num);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			sum += (str[i] - 'A' + 10) * pow(n, num);
		}
		num++;
	}
	
	cout << sum << endl;
}
