#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int arr[3] = {};
	cin >> arr[0] >> arr[1] >> arr[2];

	sort(arr, arr + 3);

	string str;
	cin >> str;

	for (int i = 0; i < 3; i++) {
		if (str[i] == 'A') {
			cout << arr[0] << " ";
		}
		else if (str[i] == 'B') {
			cout << arr[1] << " ";
		}
		else {
			cout << arr[2] << " ";
		}
	}
	cout << endl;

}
