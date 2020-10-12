class Solution {
    public int solution(int n) {
        int answer = 0;
        
        boolean[] arr = new boolean[1000000];
        
        for(int i = 2; i <= n; i++){
            int j = 2;
            while(j * i <= n){
                arr[j*i] = true;
                j += 1;
            }
        }
        
        for(int i = 2;  i<=n;i++){
            if(arr[i] == false) answer++;
        }
        
        return answer;
    }
}
