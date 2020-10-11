class Solution {
    public String solution(int a, int b) {
        String answer = "";
        
        int arr[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        int sum = 0;
        for(int i = 0; i< a-1; i++){
            sum += arr[i];
        }
        
        sum += b;
        sum %= 7;
        
        if(sum == 0) answer  = "THU";
        else if(sum == 1) answer  = "FRI";
        else if(sum == 2) answer  = "SAT";
        else if(sum == 3) answer  = "SUN";
        else if(sum == 4) answer  = "MON";
        else if(sum == 5) answer  = "TUE";
        else if(sum == 6) answer  = "WED";
          
        return answer;
    }
}
