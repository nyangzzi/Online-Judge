#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


struct music {
	string name;
	int sound;
	vector<int> number;
};

bool cmp(const music& x, const music& y) {
	return x.sound < y.sound;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
	vector<int> answer;
	vector<music> m;

	for (int i = 0; i < genres.size(); i++) {
		bool b = 0;
		for (int j = 0; j < m.size(); j++) {
			if (m[j].name == genres[i]) {
				m[j].sound += plays[i];
				m[j].number.push_back(i);
				b = 1;
			}
		}
		if (b == 0) {
			music mu;
			mu.name = genres[i];
			mu.sound = plays[i];
			mu.number.push_back(i);
			m.push_back(mu);
		}
	}

	sort(m.begin(), m.end(), cmp);

	for (int i = 0; i < m.size(); i++) {
		for (int j = 0; j < m[i].number.size(); j++) {
			int max = m[i].number[0];
			for (int k = 0; k < m[i].number.size(); k++) {
				cout << max << endl;
				if (plays[max] < plays[k]) max = k;
			}
			answer.push_back(max);
			plays[max] = -1;
			if (j == 1) break;
		}
	}

	return answer;
}

int main() {
	vector<string> genres = { "classic", "pop", "classic", "classic", "pop" };
	vector<int> plays = {500, 600, 150, 800, 2500};
	vector<int> m = solution(genres, plays);

	for (int i = 0; i < m.size(); i++) {
		cout << m[i] << endl;
	}

	system("pause");
}
