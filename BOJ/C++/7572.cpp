#include <iostream>
using namespace std;

int main() {

	int n = 0;
	cin >> n;

	char e[12] = { 'I', 'J','K','L','A','B','C','D','E','F','G','H'};
	int g[10] = { 6,7,8,9,0,1,2,3,4,5 };

	cout << e[n % 12] << g[n % 10] << endl;
}
