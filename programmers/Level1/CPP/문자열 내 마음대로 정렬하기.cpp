#include <string>
#include <vector>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    for(int i = 0; i<strings.size(); i++){
        int min = i;
        for(int j = i; j < strings.size(); j++){
            if(strings[min][n] > strings[j][n]) min = j;
            else if(strings[min][n] == strings[j][n] && strings[min] > strings[j]) min = j;
        }
        string str = strings[min];
        strings[min] = strings[i];
        strings[i] = str;
    }
    return strings;
}
