#include <string>
#include <vector>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int nowL = -1, nowR = -1;
    for(int i = 0; i < numbers.size(); i++){
        
        if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) {answer += 'L'; nowL = numbers[i];}
        else if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) {answer += 'R'; nowR = numbers[i];}
        else if(numbers[i] == 2){
            int distL = 0, distR = 0;
            if(nowL == 2) distL = 0;
            else if(nowL == 1 || nowL == 5) distL = 1;
            else if(nowL == 4 || nowL == 8) distL = 2;
            else if(nowL == 0 || nowL == 7) distL = 3;
            else if(nowL == -1) distL = 4;
            
            if(nowR == 2) distR = 0;
            else if(nowR == 3 || nowR == 5) distR = 1;
            else if(nowR == 6 || nowR == 8) distR = 2;
            else if(nowR == 0 || nowR == 9) distR = 3;
            else if(nowR == -1) distR = 4;
            
            if(distL < distR) {answer += 'L'; nowL = numbers[i];}
            else if(distL > distR) {answer += 'R'; nowR = numbers[i];}
            else if(hand == "right") {answer += 'R'; nowR = numbers[i];}
            else {answer += 'L'; nowL = numbers[i];}
        }
        else if(numbers[i] == 5){
            int distL = 0, distR = 0;
            if(nowL == 5) distL = 0;
            else if(nowL == 2 || nowL == 4 || nowL == 8) distL = 1;
            else if(nowL == 1 || nowL == 7 || nowL == 0) distL = 2;
            else if(nowL == -1) distL = 3;
            
            if(nowR == 5) distR = 0;
            else if(nowR == 2 || nowR == 6 || nowR == 8) distR = 1;
            else if(nowR == 3 || nowR == 0 || nowR == 9) distR = 2;
            else if(nowR == -1) distR = 3;
            
            if(distL < distR) {answer += 'L'; nowL = numbers[i];}
            else if(distL > distR) {answer += 'R'; nowR = numbers[i];}
            else if(hand == "right") {answer += 'R'; nowR = numbers[i];}
            else {answer += 'L'; nowL = numbers[i];}
        }
        else if(numbers[i] == 8){
            int distL = 0, distR = 0;
            if(nowL == 8) distL = 0;
            else if(nowL == 5 || nowL == 7 || nowL == 0) distL = 1;
            else if(nowL == 4 || nowL == -1 || nowL == 2) distL = 2;
            else if(nowL == 1) distL = 3;
            
            if(nowR == 8) distR = 0;
            else if(nowR == 5 || nowR == 9 || nowR == 0) distR = 1;
            else if(nowR == 6 || nowR == -1 || nowR == 2) distR = 2;
            else if(nowR == 3) distR = 3;
            
            if(distL < distR) {answer += 'L'; nowL = numbers[i];}
            else if(distL > distR) {answer += 'R'; nowR = numbers[i];}
            else if(hand == "right") {answer += 'R'; nowR = numbers[i];}
            else {answer += 'L'; nowL = numbers[i];}
        }
        else if(numbers[i] == 0){
            int distL = 0, distR = 0;
            if(nowL == 0) distL = 0;
            else if(nowL == -1 || nowL == 8) distL = 1;
            else if(nowL == 5 || nowL == 7) distL = 2;
            else if(nowL == 2 || nowL == 4) distL = 3;
            else if(nowL == 1) distL = 4;
            
            if(nowR == 0) distR = 0;
            else if(nowR == -1 || nowR == 8) distR = 1;
            else if(nowR == 5 || nowR == 9) distR = 2;
            else if(nowR == 2 || nowR == 6) distR = 3;
            else if(nowR == 3) distR = 4;
            
            if(distL < distR) {answer += 'L'; nowL = numbers[i];}
            else if(distL > distR) {answer += 'R'; nowR = numbers[i];}
            else if(hand == "right") {answer += 'R'; nowR = numbers[i];}
            else {answer += 'L'; nowL = numbers[i];}
        }
       
    }
    return answer;
}
