#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char** argv){
	vector<int> v;
    int n = 0;
    cin >> n;
    
    for(int i = 0; i<n; i++){
    	int j = 0;
        cin >> j;
        v.push_back(j);
    }
    sort(v.begin(), v.end());
    cout << v[n/2]<<endl;
    
	return 0;
}
