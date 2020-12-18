#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case) {
		cout << "#" << test_case << " ";
        int sum = 0;
        int n = 0;
        for(int i =0; i <10; i++){
        	cin >> n;
            sum+=n;
        }
    	if(sum%10 >=5) sum+=10;
        cout << sum/10<<endl;
	}
	return 0;
}
