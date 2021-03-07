#include <iostream>
#include <string>
using namespace std;

int main(){

	string str1 = "";
	string str2 = "";

	cin >> str1 >> str2;

	int arr1[26] = {};
	int arr2[26] = {};

	for (int i = 0; i < str1.size(); i++) {
		arr1[str1[i] - 'a']++;
	}

	for (int i = 0; i < str2.size(); i++) {
		arr2[str2[i] - 'a']++;
	}

	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (arr1[i] == arr2[i]) continue;
		else if (arr1[i] > arr2[i]) cnt += arr1[i] - arr2[i];
		else cnt += arr2[i] - arr1[i];
	}

	cout << cnt << endl;
}
