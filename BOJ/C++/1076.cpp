#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string str[3];
	long long n = 0;
	for (int i = 0; i < 3; i++) {
		cin >> str[i];

		if (str[i] == "black") {
			if (i == 2) n *= 1;
			else n += 0;
		}
		else if (str[i] == "brown") {
			if (i == 2) n *= 10;
			else n += 1;
		}
		else if (str[i] == "red") {
			if (i == 2) n *= 100;
			else n += 2;
		}
		else if (str[i] == "orange") {
			if (i == 2) n *= 1000;
			else n += 3;
		}
		else if (str[i] == "yellow") {
			if (i == 2) n *= 10000;
			else n += 4;
		}
		else if (str[i] == "green") {
			if (i == 2) n *= 100000;
			else n += 5;
		}
		else if (str[i] == "blue") {
			if (i == 2) n *= 1000000;
			else n += 6;
		}
		else if (str[i] == "violet") {
			if (i == 2) n *= 10000000;
			else n += 7;
		}
		else if (str[i] == "grey") {
			if (i == 2) n *= 100000000;
			else n += 8;
		}
		else if (str[i] == "white") {
			if (i == 2) n *= 1000000000;
			else n += 9;
		}

		if (i == 0) {
			n *= 10;
		}
	}
	
	cout << n << endl;

}
