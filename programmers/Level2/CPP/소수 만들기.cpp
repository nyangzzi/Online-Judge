#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = -1;
    bool arr[3000]={};
    
    for(int i = 2; i <3000; i++){
        if(arr[i] != 0) continue;
        
        for(int j = 2; j * i < 3000; j++){
            arr[j*i]=1;
        }
    }
    
    for(int i =0; i< nums.size()-2; i++){
        for(int j = i+1; j < nums.size()-1; j++){
            for(int k = j + 1; k < nums.size(); k++){
                if(arr[nums[i] + nums[j] + nums[k]] == 0) answer++;
                
            }
        }
    }

    return answer+1;
}
