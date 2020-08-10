#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string str;
	cin >> str;

	int arr[26] = {};
	for (int i = 0; i < str.size(); i++) {
		arr[str[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
	
	cout << endl;
	
}
