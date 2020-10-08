#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> vec(1);

	vec[0] = 2;
	for (size_t i = 3; i < 10000; i++)
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
	
	int N , M, one = 0;
	cin >> M >> N;
	int size = vec.size();
	int sum = 0;
	int n = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (M <= vec[i] && vec[i] <= N) {
			sum = sum + vec[i];
			one = vec[i-n];
			n++;
		}
	}

	if (sum == 0) {
		cout << -1 << endl;
	}
	else {
		cout << sum << endl;
		cout << one << endl;
	}
}
