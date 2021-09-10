#include <string>
#include <vector>
#include <math.h>
using namespace std;

long long solution(string expression) {

	vector<string> op = { "*+-" ,  "*-+",  "+*-", "+-*", "-*+", "-+*" };
	vector<string> ex;

	long long answer = 0;

	string str = "";
	for (int i = 0; i < expression.size(); i++) {

		if (i == expression.size() - 1) {
			str += expression[i];
			ex.push_back(str);
		}

		if (expression[i] >= '0' && expression[i] <= '9') {
			str += expression[i];
		}
		else {
			string s = "";
			s += expression[i];
			ex.push_back(str);
			ex.push_back(s);
			str = "";
		}
	}

	long long max = 0;

	for (int i = 0; i < op.size(); i++) {
		vector<string> exSet = ex;
	
		for (int j = 0; j < op[i].size(); j++) {
			
			int k = 0;
			while (true) {
				k++;
				if (k >= exSet.size()) break;

				if (exSet[k].size() == 1 && exSet[k][0] == op[i][j]) {
					if (op[i][j] == '*') { 
						exSet[k] = to_string(stoll(exSet[k - 1]) * stoll(exSet[k + 1]));
						exSet.erase(exSet.begin() + (k + 1));
						exSet.erase(exSet.begin() + (k - 1));
					}
					else if (op[i][j] == '+') {
						exSet[k] = to_string(stoll(exSet[k - 1]) + stoll(exSet[k + 1]));
						exSet.erase(exSet.begin() + (k + 1));
						exSet.erase(exSet.begin() + (k - 1));
					}
					else if (op[i][j] == '-') {
						exSet[k] = to_string(stoll(exSet[k - 1]) - stoll(exSet[k + 1]));
						exSet.erase(exSet.begin() + (k + 1));
						exSet.erase(exSet.begin() + (k - 1));
					}
					k = 0;
				}

				if (exSet.size() == 0) break;
			}

		}
        
		if (max < abs(stoll(exSet[0]))) {
			max = abs(stoll(exSet[0]));
		}
        
		if (exSet.size() == 0) break;
	}

	return max;
}
