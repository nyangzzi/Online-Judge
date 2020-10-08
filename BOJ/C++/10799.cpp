#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int cnt = 0;	//현재 쇠막대기
	string str;
	cin >> str;

	int num = 0;	// 잘려진 쇠막대기의 갯수

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			if (str[i + 1] == ')') {	//레이저일 경우
				num += cnt;
				i++;
			
			}
			else {
				cnt++;
			}
		}
		else {
			cnt--;
			num++;
		}
	}

	cout << num << endl;
}
