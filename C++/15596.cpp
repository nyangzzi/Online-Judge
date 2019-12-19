// main 없이 제출에 주어진 함수만 구현 하면 된다

#include <vector>
using namespace std;

long long sum(vector<int> &a) {
	long long ans = 0; 
	
	for (int i = 0; i < a.size(); i++) {
		ans += a[i];
	}
	
	return ans;
}
