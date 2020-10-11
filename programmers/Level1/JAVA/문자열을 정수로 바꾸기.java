class Solution {
    public int solution(String s) {
        int answer = 0;
        
        if(s.charAt(0) == '-'){
            for(int i =1; i<s.length(); i++){
                answer *= 10;
                answer += s.charAt(i) - '0';
            }
            answer = 0-answer;
        }
        else if(s.charAt(0) == '+'){
            for(int i = 1; i<s.length(); i++){
                answer *= 10;
                answer += s.charAt(i) - '0';
            }
        }
        else {
            for(int i =0; i<s.length(); i++){
                answer *= 10;
                answer += s.charAt(i) - '0';
            }
        }
        
        return answer;
    }
}
