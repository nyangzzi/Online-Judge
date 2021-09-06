#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Boxer{
    int num;
    int weights;
    double winRate;
    int fight;
    int winHeavy;
};

bool cmp(Boxer &x, Boxer &y){
    if(x.winRate > y.winRate){
        return true;
    }
    else if(x.winRate == y.winRate){
        if(x.winHeavy > y.winHeavy){
            return true;
        }
        else if(x.winHeavy == y.winHeavy){
            if(x.weights > y.weights){
                return true;
            }
            else if(x.weights == y.weights){
                if(x.num < y.num){
                    return true;
                }
            }
        }
    }
    return false;
}

vector<int> solution(vector<int> weights, vector<string> head2head) {
    
    vector<Boxer> score;
    
    for(int i = 0; i < weights.size(); i++){
        Boxer boxer;
        boxer.num = i+1;
        boxer.weights = weights[i];
        boxer.winRate = 0;
        boxer.fight = 0;
        boxer.winHeavy = 0;
        
        for(int j = 0; j <  weights.size(); j++){
            if(head2head[i][j] == 'W'){
                boxer.winRate++;
                if(weights[i] < weights[j]){
                    boxer.winHeavy++;
                }
            }
        
            if(head2head[i][j] != 'N'){
                boxer.fight++;
            }
        }
        if(boxer.fight != 0){
            boxer.winRate = (boxer.winRate / (double)boxer.fight) * 100;
        }
        else{
            boxer.winRate = 0;
        }
        
        score.push_back(boxer);
    }
    
    sort(score.begin(), score.end(), cmp);
    
    vector<int> answer;
    for(int i = 0; i<score.size(); i++){
        answer.push_back(score[i].num);
    }
    return answer;
}
