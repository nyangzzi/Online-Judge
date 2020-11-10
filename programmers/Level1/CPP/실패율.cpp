#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

struct game{    
    int stage;  //stage 번호
    int notClear;   //도달했으나 아직 클레이 하지 못한 플레이어 수
    int come;   //스테이지에 도달한 플레이어 수
    double fail;    //실패율
};

bool compare(game &x, game &y){
    if(x.fail == y.fail) {
        if(x.stage < y.stage) return true;
    }
    else if(x.fail > y.fail) return true;
    return false;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<game> go(N+2);
    for(int i = 1; i < N+1; i++){
        go[i].stage = i;
        go[i].notClear = 0;
        go[i].come = 0;
    }
    
    for(int i = 0; i < stages.size(); i++){
        go[stages[i]].notClear++;
        for(int j = 1; j <= stages[i]; j++){
            go[j].come++;
        }
    }
    
    for(int i = 1; i< N+1;i++){
        if(go[i].come == 0) {go[i].fail = 0; continue;}
        go[i].fail = ((double)go[i].notClear/(double)go[i].come);
    }
    
    sort(go.begin()+1,go.end()-1,compare);
    
    for(int i = 1; i< N+1; i++){
        answer.push_back(go[i].stage);
    }
    return answer;
}
