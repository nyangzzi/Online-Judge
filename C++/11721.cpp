#include <iostream>
#include <string> 
using namespace std;

int main() {

	string str,s;
	cin >> str;

	for (int i = 0; i < str.size(); i+=10) {
		s.assign(str,i,10);            //str문자열에서 i부터 10개만큼 반환
		cout << s << "\n";
	}

}
