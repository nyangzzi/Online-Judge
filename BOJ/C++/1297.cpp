#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double diagonal = 0, height = 0, width = 0;
	cin >> diagonal >> height >> width;

	double x = sqrt(pow(diagonal,2) / (pow(height, 2) + pow(width,2)));
	cout << int(x * height) << " " << int(x * width) << endl;
}
