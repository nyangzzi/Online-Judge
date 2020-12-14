#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    
    while(1){
        answer++;
        for(int i = 0; i <arr.size(); i++){
            if(answer % arr[i] != 0) break;
            if(i == arr.size()-1) return answer;
        }
        
    }
}
