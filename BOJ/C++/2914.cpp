#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a = 0;	//수록된 곡의 개수
	int i = 0;	//평균값

	cin >> a >> i;

	cout << a * (i - 1) + 1 << endl;
}
