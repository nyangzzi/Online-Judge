class Solution {
    public int solution(int[] citations) {
        int answer = citations.length;
    
        while(answer > 0){
            int up = 0, down = 0;
            for(int i = 0; i < citations.length; i++){
                if(citations[i] >= answer) up++;
                else down++;
            }
        
            if(up >= answer) break;
            answer--;
        }
        return answer;
    }
}
