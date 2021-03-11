#include <iostream>
using namespace std;

int main(){

	int n = 0;
	cin >> n;

	int aw = 0, bw = 0;

	while (n--) {
		int a = 0, b = 0;
		cin >> a >> b;

		if (a > b) aw++;
		else if (a < b) bw++;
		
	}

	cout << aw << " " << bw << endl;

	system("pause");
}
