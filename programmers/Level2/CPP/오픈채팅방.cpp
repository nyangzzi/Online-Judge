#include <string>
#include <vector>
#include <map>
using namespace std;

vector<string> solution(vector<string> record) {

	map<string, string> user;

	for (int i = record.size() - 1; i >= 0; i--) {
		int blank = 0;
		string action = "";
		string uid = "";
		string nickname = "";
		for (int j = 0; j < record[i].size(); j++) {
			if (record[i][j] == ' ') { blank++; continue; }

			if (blank == 0) { action += record[i][j]; }
			else if (blank == 1) { uid += record[i][j]; }
			else if (blank == 2) { nickname += record[i][j]; }
		}

		if (nickname != "") {
			user.insert({ uid, nickname });
		}

		if (action == "Enter"){
			record[i] = "E" + uid;
			
		}
		else if (action == "Leave") {
			record[i] = "L" + uid ;
			
		}
		else {
			record.erase(record.begin() + i);
		}

	}

	for (int i = 0; i < record.size(); i++) {

		if (record[i][0] == 'E'){
			record[i] = user.find(record[i].substr(1))->second + "님이 들어왔습니다.";
		}
		else {
			record[i] = user.find(record[i].substr(1))->second + "님이 나갔습니다.";
		}
	}

	return record;
}
