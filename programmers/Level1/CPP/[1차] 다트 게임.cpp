#include <string>
#include <cmath>
#include <vector>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    
    vector<int> u;
    int num = 0;
    for(int i = 0; i < dartResult.size(); i++){
        
        int t = dartResult[i] - '0';
        if(dartResult[i] == '1' && dartResult[i+1]=='0') {t = 10; i++;}
        
        i++;
        if(dartResult[i] == 'S') t = pow(t,1);
        else if(dartResult[i] == 'D') t = pow(t,2);
        else if(dartResult[i] == 'T') t = pow(t,3);
        
        if(i != dartResult.size()-1){
            if(dartResult[i+1] == '*') {
                t *= 2; i++;
                if(num != 0) u[num-1] *= 2;
            }
            else if(dartResult[i+1] == '#') {t *= -1;i++;}
        }
        u.push_back(t);
        num++;
    }
    
    for(int i = 0; i< u.size(); i++) answer += u[i];
    
    return answer;
}
