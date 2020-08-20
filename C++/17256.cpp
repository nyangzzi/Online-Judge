#include <iostream>
using namespace std;

int main() {
	
	int a_x = 0, a_y = 0, a_z = 0;
	int c_x = 0, c_y = 0, c_z = 0;

	cin >> a_x >> a_y >> a_z >> c_x >> c_y >> c_z;

	cout << c_x - a_z << " " << c_y / a_y << " " << c_z - a_x << "\n";

}
