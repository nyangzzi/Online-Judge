#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int n = 0;
	cin >> n;

	while(n--){
		string str1 = "";
		string str2 = "";

		cin >> str1 >> str2;

		cout << "Distances: ";
		for (int i = 0; i < str1.size(); i++) {
			if (str1[i] <= str2[i]) cout << str2[i] - str1[i] << " ";
			else cout << (str2[i] + 26) - str1[i] << " ";
		}
		cout << endl;
	}
}
