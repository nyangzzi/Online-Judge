#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    string str = "";
    int i = 0;
    while(n != 0){
        str += n%3;
        n /= 3;
    }
    int j = 0;
    for(int i = str.size()-1; i>=0;i--){
        answer += str[i] * pow(3 , j);j++;
    }
    
    return answer;
}
