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

  //next_permutation(첫번째,마지막); => 다음 순열을 반환한다 (벡터도 가능)
	if (next_permutation(arr, arr + n) == false) cout << -1 << " ";
	else {
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
	}
}
