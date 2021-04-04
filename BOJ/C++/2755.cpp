#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	double sum = 0;
	double sub_num = 0;

	for (int i = 0; i < n; i++) {
		string sub = "";
		double num = 0;
		string score = "";

		cin >> sub >> num >> score;
		
		double score_num = 0;
		
		if (score == "A+") score_num = 4.3;
		else if (score == "A0") score_num = 4.0;
		else if (score == "A-") score_num = 3.7;
		else if (score == "B+") score_num = 3.3;
		else if (score == "B0") score_num = 3.0;
		else if (score == "B-") score_num = 2.7;
		else if (score == "C+") score_num = 2.3;
		else if (score == "C0") score_num = 2.0;
		else if (score == "C-") score_num = 1.7;
		else if (score == "D+") score_num = 1.3;
		else if (score == "D0") score_num = 1.0;
		else if (score == "D-") score_num = 0.7;
		else if (score == "F") score_num = 0.0;

		sum += num * score_num;
		sub_num += num;
	
	}

	cout << fixed;
	cout.precision(2);
	cout << round((sum / sub_num) * 100) / 100 << endl;

}
