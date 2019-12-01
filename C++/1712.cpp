#include <iostream> 
using namespace std; 

int main() { 	
        long long a = 0, b = 0 , c = 0; 	
        cin >> a >> b >> c;

 	long long number = 0;
 	long long point = a + b;
 	long long money = c;
 	
        if (b >= c) cout << -1 << endl;
 	else if (point < money) cout << 1 << endl;
 	else if(point >= money) {
 		cout << a / (c - b) + 1 << endl;
 	}
 }
