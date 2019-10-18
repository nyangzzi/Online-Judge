#include <iostream>
#include <array>
using namespace std;

int zero, one, two, three, four, five, six, seven, eight, nine = 0;

int main() {

	int A, B, C = 0;
	int mul = 0;
	cin >> A >> B >> C;

	mul = A * B * C;
	int total = mul;
	array<int, 10> arr = {};

	for (int i = 9; i > 0; i--) {
		int a = 1;
		for(int j=1; j<i;j++){
			a = a * 10;
		}
		arr[i] = total / a;
		total = total - arr[i] * a;
	}

	if (arr[8] == 0 && arr[9] == 0) {
		arr[8] = 100;
		arr[9] = 100;
	}

	if (arr[9] == 0) {
		arr[9] = 100;
	}

	for (int i = 1; i <= 9; i++) {

		if (arr[i] < 10) {
			switch (arr[i] % 10) {
			case 0: zero++; break;
			case 1: one++; break;
			case 2: two++; break;
			case 3: three++; break;
			case 4: four++; break;
			case 5: five++; break;
			case 6: six++; break;
			case 7: seven++; break;
			case 8: eight++; break;
			case 9: nine++; break;
			}
		}
	}

	cout << zero << "\n" << one << "\n" << two << "\n" << three << "\n" << four << "\n" 
                << five << "\n" << six <<"\n" << seven << "\n" << eight << "\n" << nine << "\n";
	
}
