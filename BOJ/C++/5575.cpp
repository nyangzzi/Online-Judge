#include <iostream>
using namespace std;

void p() {
	int hg = 0, mg = 0, sg = 0;
	int hr = 0, mr = 0, sr = 0;
	cin >> hg >> mg >> sg >> hr >> mr >> sr;
	
	hr -= hg; mr -= mg; sr -= sg;

	while (1) {
		if (sr < 0) {
			mr--;
			sr = 60 + sr;
		}
		else if (mr < 0) {
			hr--;
			mr = 60 + mr;
		}
		else {
			break;
		}
	}
	cout << hr << " " << mr << " " << sr << endl;
}


int main() {

	int a = 3;
	while (a--) {
		p();
	}

}
