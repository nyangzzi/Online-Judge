#include <iostream>
using namespace std;

int main() {
	
	int input1 = 0, input2 = 0;

	cin >> input1 >> input2;

	cout << input1 * (input2 % 10) << endl;
	cout << input1 * (input2 % 100 - input2 % 10)/10 << endl;
	cout << input1 * (input2 / 100) << endl;
	cout << input1 * input2 << endl;
}
