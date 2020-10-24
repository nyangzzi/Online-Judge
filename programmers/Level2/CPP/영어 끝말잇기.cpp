#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    int arr[12]={};
    
    int now = 1;
    for(int i = 0; i<words.size(); i++){
        arr[now]++;
        if(i != 0){
            if(words[i][0] != words[i-1][words[i-1].size()-1]){
                answer.push_back(now);
                answer.push_back(arr[now]);
                return answer;
            }
        }
        else if(words[i].size() == 1) {
            answer.push_back(now);
            answer.push_back(arr[now]);
            return answer;
        }
        for(int j =i; j >=0; j--){
            if(i==j) continue;
            else if(words[i] == words[j]){
                answer.push_back(now);
                answer.push_back(arr[now]);
                return answer;
            }
            
        }
        now++;
        if(now > n) now =1;
    }
    answer.push_back(0);
    answer.push_back(0);
    return answer;
}
