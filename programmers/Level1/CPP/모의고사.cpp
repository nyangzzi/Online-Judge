#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int arr[3] = {};
    string now[3] = {"1", "2", "3"};
    int max = 0;
    for(int i = 0; i < answers.size(); i++){
        //1번 수포자
        if(now[0][i] == '5') now[0] += '1';
        else now[0]+=(now[0][i]+1);
        
        //2번 수포자
        if(i % 2 == 1) now[1]+='2';
        else if(i == 0 || now[1][i-1] == '5') now[1]+='1';
        else if(now[1][i-1] == '1') now[1]+='3';
        else now[1] += (now[1][i-1]+1);
        
        //3번 수포자
        if(i % 2 == 0) {   
            now[2]+=now[2][i]; 
        } 
        else {
            if(now[2][i] == '3') now[2]+='1';
            else if(now[2][i] == '2') now[2]+='4';
            else if(now[2][i] == '5') now[2]+='3';
            else now[2] += (now[2][i]+1);
        }
        
        for(int j = 0; j < 3; j++){
            if(now[j][i]-'0' == answers[i]) {
                arr[j]++;
                if(arr[j] > max) max = arr[j];
            }
        }
    }
    
    for(int i = 0; i<3; i++){
        if(arr[i] == max) answer.push_back(i+1);
    }
    
    return answer;
}
