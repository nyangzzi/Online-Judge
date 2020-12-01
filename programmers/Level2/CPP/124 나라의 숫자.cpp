#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int n) {
    string answer = "";
    string s = "";
    
    while(n > 0){
        s += n % 3 + '0';
        n /= 3;
    }
    
    cout << s<<endl;
    
    for(int i = s.size()-1; i>=0; i--){
        if(s[i] == '0') {
            answer[answer.size()-1]--;
            answer += '4';
        }
        else answer += s[i];
               
    }
    if(s == "01") answer = "4";
    return answer;
}
