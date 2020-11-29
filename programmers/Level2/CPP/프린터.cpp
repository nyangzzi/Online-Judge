#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    vector<int> q;
    
    for(int i = 0; i<priorities.size();i++){
        q.push_back(i);
    }
    
    while(1){
        bool b = 0;
        for(int i = 1; i<q.size(); i++){
            if(priorities[q[0]]<priorities[q[i]]){
                q.push_back(q[0]);
                q.erase(q.begin(),q.begin()+1);
                b = 1;
                cout << q[q.size()-1]<<" ";
                break;
            }
        }
        if(b == 0){
            answer++;
            if(q[0] == location) break;
            q.erase(q.begin(),q.begin()+1);
        }
    }
    
    return answer;
}
