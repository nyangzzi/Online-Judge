#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> arr;
    bool b = 0;
    int t = 0;
    for(int i =0; i<s.size(); i++){
        if(s[i] == ' ') {
            if(b == 1) t *= -1;
            arr.push_back(t);
            b = 0; 
            t = 0;
        }
        else if(s[i] == '-'){
            b = 1;
        }
        else{
            t *= 10;
            t += s[i]-'0';
        }
        
    }
    if(b == 1) t *= -1;
    arr.push_back(t);
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i<arr.size(); i++) cout << arr[i] <<" ";
    
    answer += to_string(arr[0]) + " " + to_string(arr[arr.size()-1]);
    
    return answer;
}
