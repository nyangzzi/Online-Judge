#include<iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case) {

		cout <<"#"<< test_case<<" ";
        int arr[10]= {};
        for(int i = 0; i<10; i++){
        	cin >> arr[i];
        }
		sort(arr, arr+10);
        cout << arr[9]<<endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
