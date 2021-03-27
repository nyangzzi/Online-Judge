#include <iostream>
using namespace std;

int main(){

	int n = 0;
	cin >> n;
	
	int nn = 0;
	cin >> nn;

	for (int i = 0; i < n - 1; i++) {
		int ring = 0;
		cin >> ring;
		int first = nn;


		int min = 0;
		if (ring < first) min = ring;
		else min = first;

		int j = 2;
		while (j <= min){

			if (ring % j == 0 && first % j == 0) {
				ring /= j;
				first /= j;
			}
			else j++;
			

		}
		cout << first << "/" << ring << endl;
		
	}
}
