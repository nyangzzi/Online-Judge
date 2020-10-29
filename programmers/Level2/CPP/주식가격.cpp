#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    
    for(int i = 0; i < prices.size(); i++){
        
        for(int j = i+1; j < prices.size(); j++){
            if(prices[i] > prices[j]){
                answer.push_back(j-i);
                break;
            }
        }
        
        if(i == answer.size()){
            answer.push_back(prices.size()-i-1);
        }
    }
    
    return answer;
}
