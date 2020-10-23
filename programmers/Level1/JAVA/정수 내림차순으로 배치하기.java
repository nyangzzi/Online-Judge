import java.util.*;

class Solution {
    public long solution(long n) {
        long answer = 0;
        String str = "" + n;
        long[] arr = new long[str.length()];
        
        for(int i =0; i<arr.length; i++){
            arr[i] = n%10;
            n/=10;
        }
        
        Arrays.sort(arr);
        
        for(int i = arr.length -1; i>=0; i--){
            answer *= 10;
            answer += arr[i];
        }
        return answer;
    }
}
