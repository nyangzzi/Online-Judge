class Solution {
    public String solution(String s) {
        String answer = "";
        
        if(s.length() % 2 == 0){
            answer += s.charAt(s.length()/2-1); //문자열에서 특정 문자에 접근
            answer += s.charAt(s.length()/2);
        }
        else {
             answer += s.charAt(s.length()/2);
        }
        
        return answer;
    }
}
