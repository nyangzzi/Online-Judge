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
	
    //equal_range(시작점, 끝점, 찾는 수); => lower_bound(), upper_bound() 결과를 쌍으로 던져준다
		auto e = equal_range(arr, arr + n, num);

		cout << e.second - e.first << " ";
		
	}
}
