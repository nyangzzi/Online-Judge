#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> vec(1);

	vec[0] = 2;
	for (size_t i = 3; i < 1000; i++)
	{
		int size = vec.size();
		int num = 0;
		for (size_t j = 0; j < size; j++)
		{
			if (i%vec[j] == 0) {
				num++;
			}
		}
		if (num == 0) {
			vec.push_back(i);
		}
	}
	
	int N, n, cnt = 0;
	cin >> N;

	for (size_t i = 0; i < N; i++)
	{
		cin >> n;
		for (size_t j = 0; j < 168; j++)
		{
			if (n == vec[j]) {
				cnt++;
			}
		}
	}

	cout << cnt << "\n";

}
