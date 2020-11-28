class Solution {
    public int solution(String skill, String[] skill_trees) {
        int answer = 0;
        for(int i = 0; i< skill_trees.length; i++){
        int num = 0;
        boolean b = false;
        for(int j = 0; j < skill_trees[i].length(); j++){
            if(skill.indexOf(skill_trees[i].charAt(j)) == -1){
                continue;
            }
            
            if(skill.indexOf(skill_trees[i].charAt(j))!=num){
                b = true;
            }
            num++;
        }
        
        if(b == false) answer++;  
        
    }
        return answer;
    }
}
