#include <iostream>
#include <string>
using namespace std;

int main(){

	string now = "";
	string start = "";
	cin >> now >> start;

	int nowTime[3] = {};
	int startTime[3] = {};

	nowTime[0] = (now[0] - '0') * 10 + (now[1] - '0');
	nowTime[1] = (now[3] - '0') * 10 + (now[4] - '0');
	nowTime[2] = (now[6] - '0') * 10 + (now[7] - '0');

	startTime[0] = (start[0] - '0') * 10 + (start[1] - '0');
	startTime[1] = (start[3] - '0') * 10 + (start[4] - '0');
	startTime[2] = (start[6] - '0') * 10 + (start[7] - '0');

	int remain[3] = {};
	
	for (int i = 2; i >= 0; i--) {
		remain[i] += startTime[i] - nowTime[i];

		if (i == 0 && remain[i] < 0) {
			remain[i] += 24;
		}
		else if (remain[i] < 0) {
			remain[i - 1]--;
			remain[i] += 60;
		}
	}

	for (int i = 0; i < 3; i++) {
		if (remain[i] < 10) {
			cout << "0";
		}
		cout << remain[i];

		if (i == 2) cout << endl;
		else cout << ":";
	}

}
