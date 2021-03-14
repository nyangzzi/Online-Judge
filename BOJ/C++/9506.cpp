#include <iostream>
#include <vector>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	
	while (1) {
		cin >> n;
		if (n == -1) break;
		
		int sum = 0;
		vector<int> v;

		for (int i = 1; i < n; i++) {
			if (n%i == 0) {
				v.push_back(i);
				sum += i;
			}
		}

		if (sum == n) {
			cout << n << " = ";

			for (int i = 0; i < v.size(); i++) {
				cout <<  v[i];
				if (i == v.size() - 1) cout << endl;
				else cout << " + ";
			}
		}
		else {
			cout << n << " is NOT perfect." << endl;
		}
	}
}
