#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    for(int i = 0; i< skill_trees.size(); i++){
        int num = 0;
        bool b = 0;
        for(int j = 0; j < skill_trees[i].size(); j++){
            if(skill.find(skill_trees[i][j]) == string::npos){
                continue;
            }
            
            if(skill.find(skill_trees[i][j])!=num){
                b = 1;
            }
            num++;
        }
        
        if(b == 0) answer++;  
        
    }
    
    return answer;
}
