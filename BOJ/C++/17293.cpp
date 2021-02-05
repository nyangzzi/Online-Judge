#include <iostream>
#include <string>
using namespace std;

int main() {

	int n = 0;
	cin >> n;
	string bottle = " bottle";
	string s = "s";
	string no[2] = { "No more", "no more" };

	string arr[] = {" of beer on the wall, ", " of beer.\n", "Take one down and pass it around, ", " of beer on the wall.", "Go to the store and buy some more, "};

	for (int i = n; i >= 0; i--) {
		if (i > 1) {
			cout << i << bottle << s << arr[0] << i << bottle << s << arr[1];
			cout << arr[2] << i - 1 << bottle;
			if (i - 1 > 1) cout << s;	
			cout << arr[3] << endl << endl;
		}
		else if (i == 1) {
			cout << i << bottle << arr[0] << i << bottle << arr[1];
			cout << arr[2] << no[1] << bottle << s << arr[3] << endl << endl;
		}
		else {
			cout << no[0] << bottle << s << arr[0] << no[1] << bottle << s << arr[1];
			cout << arr[4] << n << bottle;
			if (n > 1) cout << s;
			cout << arr[3] << endl;
		}
	}
}
