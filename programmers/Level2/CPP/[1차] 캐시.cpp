#include <string>
#include <vector>
using namespace std;

int solution(int cacheSize, vector<string> cities) {
	int answer = 0;

	vector<string> cache;

	if (cacheSize == 0) return cities.size() * 5;

	for (int i = 0; i < cities.size(); i++) {

		//도시는 무조건 소문자로
		for (int j = 0; j < cities[i].size(); j++) {
			cities[i][j] = toupper(cities[i][j]);
		}


		bool set = 0;

		for (int j = 0; j < cache.size(); j++) {
			if (cache[j] == cities[i]) {
				cache.erase(cache.begin() + j);
				cache.push_back(cities[i]);
				set = 1;
				answer += 1;
				break;
			}
		}

		if (set) continue;

		if (cacheSize > cache.size()) {
			cache.push_back(cities[i]);
			answer += 5;
		}
		else {
			cache.erase(cache.begin());
			cache.push_back(cities[i]);
			answer += 5;			
		}
	}

	return answer;
}
