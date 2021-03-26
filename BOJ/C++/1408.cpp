//수정 필요

#include <iostream>
#include <string>
using namespace std;

int main(){

	string now = "";
	string start = "";
	cin >> now >> start;

	int nowTime[3] = {};
	int startTime[3] = {};

	nowTime[0] = (now[0] - '0') * 10 + (now[1] = '0');
	nowTime[1] = (now[3] - '0') * 10 + (now[4] = '0');
	nowTime[2] = (now[6] - '0') * 10 + (now[7] = '0');

	startTime[0] = (start[0] - '0') * 10 + (start[1] = '0');
	startTime[1] = (start[3] - '0') * 10 + (start[4] = '0');
	startTime[2] = (start[6] - '0') * 10 + (start[7] = '0');



	system("pause");
}
