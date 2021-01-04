#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	  
	for(test_case = 1; test_case <= T; test_case++) {
		int u = 0;
        int sum =0;
        for(int i = 0; i<10; i++){
        	cin >> u;
            if(u % 2 == 1) sum+=u;
        }
		
        cout << "#"<<test_case<<" " <<sum << endl;

	}
	return 0;
}
