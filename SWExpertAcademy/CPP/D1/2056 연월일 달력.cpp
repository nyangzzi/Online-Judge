#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv){
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case){

		cout << "#" << test_case<<" ";
        int month = 0, day =0;
        string str= "";
        cin >> str;
        for(int i = 0; i<str.size(); i++){
        	if(i < 4) continue;
            else if(i < 6){
                month*=10; month+=str[i]-'0';
            }
            else {
                day*=10; day+=str[i]-'0';
            }
        }
        
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
        	if(day > 31 || day < 1) cout << -1;
            else {
            	for(int i = 0; i < str.size(); i++){
                	cout << (char)str[i];
                    if(i==3||i==5) cout << "/";
                }
            }
        }
        else if(month == 4 || month == 6 || month == 9 || month == 11){
            if(day > 30 || day < 1) cout << -1;
            else {
            	for(int i = 0; i < str.size(); i++){
                	cout << (char)str[i];
                    if(i==3||i==5) cout << "/";
                }
            }
        }
        else if (month == 2){
        	if(day > 28 || day < 1) cout << -1;
            else {
            	for(int i = 0; i < str.size(); i++){
                	cout << (char)str[i];
                    if(i==3||i==5) cout << "/";
                }
            }
        }
        else {
            cout <<-1;
        }
        
       cout << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
