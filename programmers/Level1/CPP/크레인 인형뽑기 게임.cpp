#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    
    vector<int> basket;
    
    for(int i = 0; i<moves.size(); i++){
        int now = moves[i]-1;
        for(int j = 0; j < board[now].size(); j++){
            if(board[j][now] != 0){
                if(basket.size() == 0) {
                    basket.push_back(board[j][now]);
                    board[j][now]=0;
                }
                else {
                    if(basket[basket.size()-1] == board[j][now]){
                        board[j][now]=0;
                        basket.erase(basket.end()-1,basket.end());
                        answer+=2;
                    }
                    else {
                        basket.push_back(board[j][now]);
                        board[j][now]=0;
                    }
                }
                break;
            }
        }
    }
    
    return answer;
}
