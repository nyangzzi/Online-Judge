#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = new_id; 

    for(int i = 0; i<answer.size(); i++){
        if(answer[i] >= 'A' && answer[i] <= 'Z'){   //1단계
            answer[i] = answer[i] - 'A' + 'a';
        } 
        
        if( !((answer[i]>='a' && answer[i] <='z') ||    //2단계
              (answer[i] >= '0' && answer[i] <= '9') ||
              answer[i] == '-' || answer[i] == '_' ||  answer[i] == '.') ){
            answer.erase(i,1);
            i--;
        }
        
        if(i != 0 && answer[i] == '.'){ //3단계
            if(answer[i-1] == '.') {
                answer.erase(i,1);
                i--;
            }
        }
    }
    
    if(answer[0] == '.') answer.erase(0,1); //4단계
    if(answer[answer.size()-1] == '.') answer.erase(answer.size()-1,1);
    
    if(answer == "") answer = "a"; //5단계 
    
    if(answer.size() > 15) {    //6단계
        answer.erase(15, answer.size()-15);  
        if(answer[14] == '.') answer.erase(answer.size()-1,1);
    }
    
    if(answer.size() < 3){  //7단계
        char a = answer[answer.size()-1];
       for(int i = answer.size(); i < 3; i++){
            answer += a;
        }
    }
    
    return answer;
}
