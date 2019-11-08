#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	vector <int> vec(1);
	cin >> vec[0];
	int x = 0;
	for (size_t i = 1; i < N; i++) {
		cin >> x;
		vec.push_back(x);
	}
	sort(vec.begin(), vec.end());
	
	for (size_t i = 0; i < N; i++)
	{
		cout << vec[i] << "\n";
	}
	
}
