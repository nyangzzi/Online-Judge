#include<iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){
	string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
    	//str[i] = toupper(str[i]);
        //cout << str[i];
        cout << (char)toupper(str[i]);
    }
    
	return 0;
}
