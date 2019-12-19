#include <iostream>
#include <string>
using namespace std;

int main() {

	string str;
	cin >> str;

	bool c = 0;
	bool j = 0;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '_') c = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z') j = 1;
	}

	if (str[0] == '_' || str[str.size() - 1] == '_') { //맨 앞과 맨 뒤에 _ 가 오는 경우
		cout << "Error!";
		goto L1;
	}

	for (int i = 0; i < str.size() - 1; i++) {  //맨 앞 글자가 소문자가 아닌 경우
		if (str[i] == '_'&&str[i+1] == '_') {
			cout << "Error!";
			goto L1;
		}
	}



	if (c == 0 && j == 0) {
		cout << str;
		goto L1;
	}
	else if (c == 1 && j == 1) { // _와 대문자가 같이 오는 경우
		cout << "Error!";
		goto L1;
	}
	else if (c == 1 && j == 0) { //만약 c++ 변수명이라면
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '_') 	str[i + 1] = str[i + 1] - 32;
			else cout << str[i];
		}
	}
	else if (c == 0 && j == 1) {	//만약 java 변수명이라면
		if (str[0] >= 'A'&& str[0] <= 'Z') {
			cout << "Error!";
			goto L1;
		}
		for (int i = 0; i < str.size(); i++) {
			if (str[i] >= 65 && str[i] <= 90) {
				cout << '_';
				str[i] = str[i] + 32;
				cout << str[i];
			}
			else cout << str[i];
		}
  }
  
/*
goto label;을 해주었을 경우, 컴파일러에 따라
label 이 있는 곳 다음에는 함수가 종료되면 컴파일 에러가 난다
(vs에서는 정상 동작)
*/
L1:
	cout << endl;
}
