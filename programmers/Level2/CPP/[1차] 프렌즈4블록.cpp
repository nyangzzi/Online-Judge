#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int m, int n, vector<string> board) {

	int answer = 0;

	vector<vector<char>> game;

	for (int i = 0; i < n; i++) {
		vector<char> g;
		for (int j = m - 1; j >= 0; j--) {
			g.push_back(board[j][i]);
		}
		game.push_back(g);
	}

	while (true) {
		bool set[30][30] = {};

		bool b = 0;
		//삭제 대상 확인
		for (int i = 0; i < game.size()- 1; i++) {
			if (game[i].size() == 0) continue;
      
			for (int j = 0; j < game[i].size() - 1; j++){
				if (j + 1 < game[i + 1].size()) { //null이 아닌지 확인
					if (game[i][j] == game[i + 1][j] && game[i][j] == game[i][j + 1] && game[i][j] == game[i + 1][j + 1]) { //지울 수 있으면
						set[i][j] = 1; set[i + 1][j] = 1; set[i][j + 1] = 1; set[i + 1][j + 1] = 1;
						b = 1;
					}
				}
			}					
		}

		if (b == 0) break;  //지울 게 아무것도 없으면 나가기
		
		//삭제
		for (int i = n - 1; i >= 0; i--) {
			for (int j = m - 1; j >= 0; j--) {
				if (set[i][j]) {
					game[i].erase(game[i].begin() + j);
					answer++;
				}
			}
		}
	}
	
	return answer;

}
