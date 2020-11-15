#include <string>
#include <vector>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int cnt =0;
    int zero = 0;
    while(s != "1"){
        cnt++;
        int one = 0;
        for(int i =0; i<s.size(); i++) {
            if(s[i] == '0') zero++;
            else one++;
        }
        s="";
        while(one != 0){
            s+= one % 2 + '0';
            one /= 2;
        }
    }
    answer.push_back(cnt);
    answer.push_back(zero);
    return answer;
}
