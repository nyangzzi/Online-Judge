//double 형으로 구현하면 부동소수점 오차에 의해 특정 입력에서 잘못된 출력
//따라서 long long (int도 가능)의 정수형으로 가지고 온 뒤 반올림을 해주는 부분을 구현

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int size = 0;
	cin >> size;
	double* arr = new double[size];
	int m = 0;
	cin >> m;

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	sort((arr), (arr + size));

	double j = 0, b = 0;
	int count1 = 0;

	for (int i = m; i < size - m; i++) {
		j = j + arr[i];
		count1++;
	}
	
	long long s = (j / count1)*1000 ;
	if (s % 10 >= 5) { 
		s = s+10; 
		s = s - s % 10;
	}
	else {
		s = s - s % 10;
	}
	
	if (s % 1000 == 0) cout << (double)s / 1000 << ".00" << endl;
	else if (s % 100 == 0) cout << (double)s / 1000 << "0" << endl;
	else cout << (double)s / 1000 << endl;
	
	for (int i = m; i < size - m; i++) {
		if (i == m) b = b + (arr[i] * (m + 1));
		else if (i == size - m - 1) b = b + (arr[i] * (m + 1));
		else b = b + arr[i];
	}

	long long k = (b / size) * 1000;
	
	if (k % 10 >= 5) {
		k = k+10;
		k = k - k % 10;
	}
	else {
		k = k - k % 10;
	}

	if (k % 1000 == 0) cout << (double)k / 1000 << ".00" << endl;
	else if ( k%100 == 0 ) cout << (double)k / 1000  << "0" << endl;
	else cout << (double)k/1000<< endl;

	delete[] arr;
	arr = NULL;
}
