#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    
    while(v.size() <= n){
        v.push_back(((v[v.size()-1]%1234567)+(v[v.size()-2]%1234567))%1234567);
    }
    return v[v.size()-1];
}
