#include<iostream>
using namespace std;

int main(int argc, char** argv) {
	int n = 0;
    cin >> n;
    for(int i = 1; i <= n;i++){
    	int a = i;
        bool b= 0;
        while(a>0){
        	if(a%10 == 3 || a%10 == 6 || a%10 == 9) {cout << "-"; b =1;}
            a/=10;
        }
        if(b == 0) cout << i;
        cout << " ";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
