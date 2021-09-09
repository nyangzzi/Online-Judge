#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(vector<int> &x, vector<int> &y) {
	if (x.size() > y.size()) {
		return false;
	}
	return true;
}


vector<int> solution(string s) {
	
	vector<int> answer;

	vector<vector<int>> vec;


	for (int i = 1; i < s.size() - 1; i++) {
		if (s[i] == '{') {
			vector<int> v;
			int n = 0;
			while (true) {
				i++;				
				if (s[i] == '}') {
					v.push_back(n);
					n = 0;
					vec.push_back(v);					
					break;
				}
				else if (s[i] == ',') {
					v.push_back(n);
					n = 0;
				}
				else {
					n *= 10;
					n += s[i] - '0';
				}
			}
		}
	}

	sort(vec.begin(), vec.end(), cmp);

	for (int i = 0; i < vec.size(); i++) {
		
		if (i == 0) {
			answer.push_back(vec[i][0]);
		}
		else {
			sort(vec[i].begin(), vec[i].end());
			sort(vec[i - 1].begin(), vec[i - 1].end());

			vector<int> v(vec[i].size() + vec[i-1].size());
			auto iter = set_difference(vec[i].begin(), vec[i].end(), vec[i-1].begin(), vec[i-1].end(), v.begin());
			v.erase(iter, v.end());
			
			answer.push_back(v[0]);
		}
	}

	return answer;
}
