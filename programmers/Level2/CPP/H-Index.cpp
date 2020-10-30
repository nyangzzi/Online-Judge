#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = citations.size();
    
    while(answer > 0){
        int up = 0, down = 0;
        for(int i = 0; i < citations.size(); i++){
            if(citations[i] >= answer) up++;
            else down++;
        }
        
        if(up >= answer) break;
        answer--;
    }
    
    return answer;
}
