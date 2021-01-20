#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t= 0; 
    cin >> t;
    
    for(int test = 1; test <= t; test++){
    
        int n = 0, m = 0;
        cin >> n >> m;
        
        /*if(n > m) {	//m이 무조건 크도록
        	int tmp =0;
            tmp = n;
            n = m;
            m = tmp;
        }*/
        
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
        
        for(int i = 0; i<=m-n; i++){
            int mul = 0;
            for(int j = 0; j < n; j++){
                if(n < m) {mul += (a[j] * b[i+j]);}
                else {mul += (b[j] * a[i+j]);}
            }       
            if(mul > max) max = mul;
        }
        
        cout << "#" << test << " " << max <<endl;
    }
    

}
