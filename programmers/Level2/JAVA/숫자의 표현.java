class Solution {
    public int solution(int n) {
        int answer = 0;
    
        for(int i = 1; i <= n;i++){
            int u = 0;
            for(int j = i; j <= n; j++){
                u += j;
                if(u == n) {answer++; break;}
                else if(u > n) break;
            }
        }
    
    return answer;
    }
}
