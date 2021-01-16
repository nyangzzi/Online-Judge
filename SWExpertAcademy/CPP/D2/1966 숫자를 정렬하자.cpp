#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char** argv){
	int test_case;
	int T;
	cin>>T;
   
	for(test_case = 1; test_case <= T; ++test_case){
         int n = 0;
    	cin >> n;
		vector<int> v;
        for(int i = 0; i<n; i++){
            int c = 0;
            cin >> c;
            v.push_back(c);
        }
        
        sort(v.begin(), v.end());
        
        cout << "#" << test_case<<" ";
        for(int i = 0; i<n; i++){
        cout << v[i] <<" ";
        }
        cout << endl;
        
	}
	return 0;
}
