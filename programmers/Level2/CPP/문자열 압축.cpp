#include <string>
#include <vector>

using namespace std;

int solution(string s) {
	int answer = s.size();

	for (int i = 1; i <= s.size(); i++) {

		string prev = "";
		string next = "";

		int nowCnt = 1;
		string str = "";

		for (int j = 0; j < s.size(); j++) {

			next += s[j];

			if (next.size() == i) {
				if (prev == next) {
					nowCnt++;
				}
				else {
					if (nowCnt > 1) {
						str += to_string(nowCnt);
					}
					str += prev;
					prev = next;
					nowCnt = 1;
				}
				next = "";
			}

			if (j == s.size() - 1)
			{
				if (nowCnt > 1) {
					str += to_string(nowCnt);
				}
                if(prev == next){
                    str = str + prev;
                }
				else{
                    str = str + prev + next;
                }
			}
		}

		if (str.size() < answer) {
			answer = str.size();
		}
	}
	return answer;
}
