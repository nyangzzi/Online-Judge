#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    
    for(int i=0; i< str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z') cout << (char)(str[i] - 'A' + 'a');
        else cout << (char)(str[i] - 'a' + 'A');
    }
    cout <<endl;
}
