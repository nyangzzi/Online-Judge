#include<iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	int test_case;
	int T;
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		string str;
        cin >> str;
        int a=0, b= str.size()-1;
        
        bool i = 0;
        while(a < b){
            if(str[a] != str[b]) {i = 1; break;}
            else {a++; b--;}   
        }
		cout << "#" << test_case <<" ";
        if(i==1)cout << 0<<endl;
        else cout << 1<<endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
