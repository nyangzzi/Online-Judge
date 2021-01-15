#include <iostream>
using namespace std;

int main(){
	int t = 0;
    cin >> t;
    
    for(int test = 1; test <= t; test++){
    	int n = 0;
        cin >>n;
        
        int sum = 0;
        for(int i = 1; i<=n; i++){
            if(i%2) sum += i;
            else sum -= i;
        }
        
        cout << "#" << test << " " << sum << endl;
    }
    
}
