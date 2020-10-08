#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int x = 0, y = 0, w = 0, h = 0;

	cin >> x >> y >> w >> h;

	int arr[4] = { x,y,w - x ,h - y };
	sort(begin(arr), end(arr));

	cout << arr[0] << endl;
}
