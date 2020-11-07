#include <string>
#include <vector>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i = 0; i < arr1.size(); i++){
        vector<int> v(n,0);
       
        for(int j = n-1; j >=0; j--){
            if(arr1[i] % 2 == 1 || arr2[i] % 2 == 1) v[j] = 1;
            arr1[i] /= 2; arr2[i] /= 2; 
        }
        
        string str = "";
        for(int j = 0; j<n; j++){
            if(v[j] > 0) str += "#";
            else str += " ";
        }
        answer.push_back(str);
    }
    
    
    return answer;
}
