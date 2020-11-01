#include <string>
#include <vector>
#include <algorithm>
using namespace std;


struct music {
	string name;
	int sound;
	vector<pair<int,int>> number;
};

bool cmp(const music& x, const music& y) {
	return x.sound > y.sound;
}

bool cmp2(const pair<int,int>& x, const pair<int, int>& y) {
	return x.second > y.second;
}


vector<int> solution(vector<string> genres, vector<int> plays) {
	vector<int> answer;
	vector<music> m;

	for (int i = 0; i < genres.size(); i++) {
		bool b = 0;
		for (int j = 0; j < m.size(); j++) {
			if (m[j].name == genres[i]) {
				m[j].sound += plays[i];
				m[j].number.push_back(make_pair(i,plays[i]));
				b = 1;
			}
		}
		if (b == 0) {
			music mu;
			mu.name = genres[i];
			mu.sound = plays[i];
			mu.number.push_back(make_pair(i, plays[i]));
			m.push_back(mu);
		}
	}

	sort(m.begin(), m.end(), cmp);

	for (int i = 0; i < m.size(); i++) {
		sort(m[i].number.begin(), m[i].number.end(), cmp2);
		answer.push_back(m[i].number[0].first);
		if (m[i].number.size() > 1) answer.push_back(m[i].number[1].first);
	}

	return answer;
}
