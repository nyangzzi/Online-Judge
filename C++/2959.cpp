#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 
	int arr[4] = 0;
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

	sort(arr, arr + 4);

	cout << arr[1] * arr[2] << endl;

 
}
