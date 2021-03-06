#include <iostream>
#include <string>
using namespace std;

int main(){

	string str = "";
	cin >> str;

	long long x = x = (str[0] - '0') * str.size();;
	while (x > 9) {
		
		x = (str[0] - '0') * str.size();
		str = to_string(x);
	}
	
	if (x < 10) cout << "FA" << endl;
	else cout << "NFA" << endl;

}
