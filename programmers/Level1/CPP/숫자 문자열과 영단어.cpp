#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    
    string now = "";
    int answer = 0;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            answer = (answer * 10) + (s[i] - '0');
        }
        else {
            now += s[i];
            
            if(now == "zero"){ answer = answer * 10 + 0; now =""; }
            else if(now == "one"){ answer = answer * 10 + 1; now =""; }
            else if(now == "two"){ answer = answer * 10 + 2; now =""; }
            else if(now == "three"){ answer = answer * 10 + 3; now =""; }
            else if(now == "four"){ answer = answer * 10 + 4; now =""; }
            else if(now == "five"){ answer = answer * 10 + 5; now =""; }
            else if(now == "six"){ answer = answer * 10 + 6; now =""; }
            else if(now == "seven"){ answer = answer * 10 + 7; now =""; }
            else if(now == "eight"){ answer = answer * 10 + 8; now =""; }
            else if(now == "nine"){ answer = answer * 10 + 9; now =""; }
        }
    }
    
    return answer;
}
