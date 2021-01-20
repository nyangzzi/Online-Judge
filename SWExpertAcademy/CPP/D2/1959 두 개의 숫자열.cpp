#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t= 0; 
    cin >> t;
    
    for(int test = 1; test <= t; test++){
    
        int n = 0, m = 0;
        cin >> n >> m;
        
        vector<int> a;
        vector<int> b;
        
        for(int i = 0; i < n; i++){
            int N = 0;
            cin >> N;
            a.push_back(N);
        }
        
        for(int i = 0; i < m; i++){
            int M = 0;
            cin >> M;
            b.push_back(M);
        }
        
        int max = 0;
        
        if(n < m){
        	for(int i = 0; i<=m-n; i++){
            	int mul = 0;
            	for(int j = 0; j < n; j++){
                	mul += (a[j] * b[i+j]);
            	}       
            	if(mul > max) max = mul;
        	}
        }
        else {
            for(int i = 0; i<=n-m; i++){
            	int mul = 0;
            	for(int j = 0; j < m; j++){
                	mul += (b[j] * a[i+j]);
            	}       
            	if(mul > max) max = mul;
        	}
        }
        
        cout << "#" << test << " " << max <<endl;
    }
    

}
