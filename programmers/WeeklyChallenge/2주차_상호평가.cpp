#include <string>
#include <vector>

using namespace std;

string solution(vector<vector<int>> scores) {
    
    string answer = "";
    
    for(int i =0; i<scores.size(); i++){
    
        int max = 0, min = 100, self = 0;
        double sum = 0;
        
        for(int j = 0; j<scores[i].size();j++){
            if(i == j){
                self = scores[j][i];         
            }
            else if(max < scores[j][i]){
                max = scores[j][i];
            }
            else if(min > scores[j][i]){
                min = scores[j][i];
            }
            sum += scores[j][i];
        }
        
        if(self > max || self < min){
            sum-= self;
            sum /= (double)(scores[i].size()-1);
        }
        else{
            sum /= (double)scores[i].size();
        }
        
        if(sum >= 90) answer += "A";
        else if(sum >= 80) answer += "B";
        else if(sum >= 70) answer += "C";
        else if(sum >= 50) answer += "D";
        else answer += "F";
        
    }
    
    return answer;
}
