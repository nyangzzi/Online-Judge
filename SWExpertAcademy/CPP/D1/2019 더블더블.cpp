#include<iostream>
using namespace std;

int main(int argc, char** argv){
    
    int n = 0;
    cin >> n;
    
    int a = 1;
    for(int i = 0; i <= n; i++){
        cout << a << " ";
        a *= 2;
    }
    
	return 0;
}
