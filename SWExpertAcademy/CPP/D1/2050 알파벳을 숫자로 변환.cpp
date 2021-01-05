#include<iostream>
#include <string>
using namespace std;
int main(int argc, char** argv){
	string str;
    cin >> str;
    
    for(int i = 0; i < str.size(); i++){
    	cout << str[i] - 'A' + 1<< " ";
    }
    
	return 0;
}
