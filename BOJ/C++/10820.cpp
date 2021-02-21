#include <iostream>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str = "";

	while (getline(cin, str)) {
		
		int small = 0, big = 0, num = 0, blank = 0;

		for (int i = 0; i < str.size(); i++) {
			if (str[i] >= 'A' && str[i] <= 'Z') big++;
			else if (str[i] >= 'a' && str[i] <= 'z') small++;
			else if (str[i] >= '0' && str[i] <= '9') num++;
			else if (str[i] == ' ') blank++;
		}

		cout << small << " " << big << " " << num << " " << blank << endl;
	}

}
