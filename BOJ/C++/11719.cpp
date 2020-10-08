#include <iostream>
#include <string> 
using namespace std;

int main() {

	string str;
	int i = 0;

	while (true) {

		getline(cin,str);
		i++;
	
		if (i>100) {
			break;
		}
		
		cout << str << "\n";
	}

}

