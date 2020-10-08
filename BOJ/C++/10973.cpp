#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[10000];

	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
  
  //prev_permutation(첫번째, 마지막); => 이전 순열로 변경
	if (prev_permutation(arr, arr + n) == false) cout << -1 << " "; //가장 처음 순열일 경우 false를 반환
	else {
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
	}
}
