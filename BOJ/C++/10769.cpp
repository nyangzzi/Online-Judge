#include <iostream>
#include <string>
using namespace std;

int main() {

	string str = "";
	getline(cin, str);

	int happy = 0, sad = 0;

	while (str.find(":-)") != string::npos) {
		str.erase(str.find(":-)"), 3);
		happy++;
	}
	
	while (str.find(":-(") != string::npos) {
		str.erase(str.find(":-("), 3);
		sad++;
	}

	if (happy == 0 && sad == 0) cout << "none" << endl;
	else if (happy == sad) cout << "unsure" << endl;
	else if (happy > sad) cout << "happy" << endl;
	else cout << "sad" << endl;
 
}
