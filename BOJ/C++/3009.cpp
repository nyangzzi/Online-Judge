#include <iostream>
using namespace std;

int main() {
	
	int arrX[3] = {};
	int arrY[3] = {};



	cin >> arrX[0] >> arrY[0] >> arrX[1] >> arrY[1] >> arrX[2] >> arrY[2];



	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (arrX[i] == arrX[j]) { 
				arrX[i] = 0; arrX[j] = 0; 
			}
		}
	}
	

	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (arrY[i] == arrY[j]) {
				arrY[i] = 0; arrY[j] = 0;
			}
		}
	}

	
	
	for (int i = 0; i < 3; i++) {
		if (arrX[i] > 0) cout << arrX[i] << " ";
	}
	
	for (int i = 0; i < 3; i++) {
		if (arrY[i] > 0) cout << arrY[i] << endl;
	}
}
