#include <iostream>
using namespace std;

int main() {

	int size = 0;
	cin >> size;
	int* arrw = new int [size]; //각각의 몸무게 배열
	int* arrt = new int[size]; //각각의 키 배열
	
	int* wt = new int[size]; //원소보다 몸무게가 큰 사람 수 배열

	for (int i = 0; i < size; i++) {
		wt[i] = 0;
	}
	
	for (int i = 0; i < size; i++) {
		cin >> arrw[i] >> arrt[i];
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) continue;
			if (arrw[i] < arrw[j] && arrt[i] < arrt[j]) {
				wt[i]++;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		cout << wt[i] + 1 << " ";
	}

	
	delete[] arrw;
	delete[] arrt;
	delete[] wt;
	arrw = NULL;
	arrt = NULL;
	wt = NULL;
}
