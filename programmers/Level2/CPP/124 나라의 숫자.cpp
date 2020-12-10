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
 
    for(int i = 0; i < s.size(); i++){
        if(i != s.size()-1 && s[i] == '0'){
            s[i+1]--;
            s[i] = '4';
        }
        else if(i != s.size()-1 && s[i] < '0'){
            s[i+1]--;
            s[i] = '2';
        }
    }
    
    for(int i = s.size()-1; i>=0; i--){
        answer += s[i];
        if(answer[0] == '0') answer = "";
    }
    
    
    
    return answer;
}
