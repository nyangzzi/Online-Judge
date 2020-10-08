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
    
    //만약 찾고자 하는 값이 없다면 구간의 끝 주소나 이터레이터를 반환
		auto lower = lower_bound(arr, arr + n, num);  //lower_bound(시작점, 끝점, 찾는 수); => 찾고자 하는 수와 "같거나 큰 수" 중 가장 작은 수의 주소
		auto upper = upper_bound(arr, arr + n, num);  //upper_bound(시작점, 끝점, 찾는 수); => 찾고자 하는 수보다 큰 수 중 가장 작은 수의 주소
		
		cout << upper - lower << " ";
		
	}
}
