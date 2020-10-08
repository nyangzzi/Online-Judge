#include <iostream>
#include <string>
using namespace std;

int main() {
    int test =0;
    cin >> test;
    
    while(test--){
        string str;
        cin >> str;
        
        cout<< str[0] <<  str[str.size()-1] << endl;
    }
}
