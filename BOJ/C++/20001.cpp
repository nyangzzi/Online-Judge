#include <iostream>
#include <string>
using namespace std;

int main() {

	string str = "";

	int n = 0;
	while (str != "고무오리 디버깅 끝") {
		getline(cin, str);
		if (str == "고무오리 디버깅 시작") n = 0;
		else if (str == "문제") n++;
		else if (str == "고무오리") {
			if (n <= 0) n += 2;
			else n--;
		}
	}

	if (n == 0) cout << "고무오리야 사랑해" << endl;
	else cout << "힝구" << endl;

	system("pause");
}
