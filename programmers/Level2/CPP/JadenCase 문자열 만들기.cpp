#include <string>
using namespace std;

string solution(string s) {
    string answer = s;
    
    bool b = 0;
    for(int i =0; i<answer.size(); i++){
        if(b == 0){
            b = 1;
            if(answer[i] >= 'a' && answer[i] <= 'z'){
                    answer[i] = answer[i] - 'a' + 'A';
            }
            if(answer[i] == ' ') {b = 0;}
        }
        else{
            if(answer[i] == ' ') {b = 0;}
            else { 
                if(answer[i] >= 'A' && answer[i] <= 'Z'){
                    answer[i] = answer[i] - 'A' + 'a';
                }
                b = 1;
            }
        }
    }
    
    return answer;
}
