#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    sort(people.begin(), people.end());
    
    int i = 0, j = people.size()-1;
    int num = 0;
    while(i < j){
        
        if(people[i] + people[j] <= limit){
            answer++;
            i++; j--;
            num+=2;
        }
        else {
            answer++;
            j--;
            num++;
        }
    }
    
    if(num < people.size()) answer++;
    
    return answer;
}
