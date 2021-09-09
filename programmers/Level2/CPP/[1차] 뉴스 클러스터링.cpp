#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string str1, string str2) {
	
	vector<string> s1;
	vector<string> s2;

	int min = 0, max = 0;

	for (int i = 0; i < str1.size() - 1; i++) {

		str1[i] = toupper(str1[i]);
		str1[i + 1] = toupper(str1[i + 1]);

		if (!((str1[i] >= 'A' && str1[i] <= 'Z') && (str1[i + 1] >= 'A' && str1[i + 1] <= 'Z'))) continue;

		string str = "";
		str += str1[i];
		str += str1[i + 1];

		s1.push_back(str);
	}


	for (int i = 0; i < str2.size() - 1; i++) {

		str2[i] = toupper(str2[i]);
		str2[i + 1] = toupper(str2[i + 1]);

		if (!((str2[i] >= 'A' && str2[i] <= 'Z') && (str2[i + 1] >= 'A' && str2[i + 1] <= 'Z'))) continue;

		string str = "";
		str += str2[i];
		str += str2[i + 1];
		s2.push_back(str);
	}

	//정렬
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	vector<string> intersection(s1.size() + s2.size());
	auto iter = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), intersection.begin());
	intersection.erase(iter, intersection.end());

	min = intersection.size();
	max = s1.size() + s2.size() - min;

	if (min == 0 && max == 0) return 65536;
	
	return (int)(((double)min / (double)max) * (double)65536);
}
