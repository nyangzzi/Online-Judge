class Solution {
    public int[] solution(int[] arr) {
        int[] answer = {};
        
        if(arr.length == 1){
            answer = new int[1];
            answer[0] = -1;
        }
        else{
            int min = 0;
            for(int i = 1; i<arr.length; i++){
                if(arr[min] > arr[i]) min = i;
            }
            answer = new int[arr.length-1];
            int j = 0;
            for(int i = 0; i<arr.length; i++){
                if(arr[min] == arr[i]) continue;
                else {answer[j] = arr[i]; j++;}
            }
            
        }
        
        return answer;
    }
}
