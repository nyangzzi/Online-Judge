#include <iostream>
#include <string>
using namespace std;

int main(){

	int n = 0;
	cin >> n;

	while (n--) {
		string a = "", b = "";
		cin >> a >> b;

		string str = "";
		getline(cin, str);

		str.erase(0, 1);
		cout << str << " " << a << " " << b << endl;

		
	}
}
