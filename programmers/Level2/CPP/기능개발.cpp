#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int now = 0;
    int delay = 0;
    for(int i = 0; i< progresses.size(); i++){
        int day = 100 - progresses[i];
        if(day % speeds[i] == 0) day /= speeds[i];
        else day = (day / speeds[i]) + 1;
        
        if(now < day) {
            if(delay != 0) {answer.push_back(delay);}
            
            delay = 1;
            now = day;
        }
        else {
            delay++;
        }
    }
    
    answer.push_back(delay);
    return answer;
}
