#include <string>
#include <vector>
using namespace std;

vector<int> solution(int brown, int yellow) {
	vector<int> answer;
	brown += yellow;

	int w = 1, h = 0;
	while (1) {
		if (brown % w == 0) {
			h = brown / w;
			int a = h - 2, b = w - 2;
			if (a * b == yellow) {
				if (w > h) {
					answer.push_back(w);
					answer.push_back(h);
				}
				else {
					answer.push_back(h);
					answer.push_back(w);
				}
				break;
			}
		}
		w++;
	}
	return answer;
}
