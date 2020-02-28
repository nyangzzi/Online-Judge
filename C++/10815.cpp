#include <iostream>
#include <algorithm>
using namespace std;

int arr[500000] = {};

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = 0, m = 0;
	cin >> n;

	for (int N = 0; N < n; N++) {
		cin >> arr[N];
	}
	 
	sort(arr, arr + n);
	
	cin >> m;
	int num = 0;
	while (m--) {
		cin >> num;
		//binary_search(시작점, 끝점, 찾을 값); => 1 혹은 0으로 return
		cout << binary_search(arr, arr + n, num) << " ";
	}
}
