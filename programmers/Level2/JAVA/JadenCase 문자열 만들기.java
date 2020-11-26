class Solution {
    public String solution(String s) {
        String answer = "";
    
        boolean b = false;
        for(int i =0; i<s.length(); i++){
            if(b == false){
                b = true;
                if(s.charAt(i) == ' ') {answer+= ' '; b = false; continue;}
                else answer += Character.toUpperCase(s.charAt(i));
                b = true;
            }
            else{
                if(s.charAt(i) == ' ') {answer+= ' '; b = false; continue;}
                else answer += Character.toLowerCase(s.charAt(i));
                b = true;
            }
        }
    
        return answer;
    }
}
