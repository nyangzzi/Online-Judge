#include <iostream>
using namespace std;

int main(){
    int n = 0; //설문조사를 한 사람의 수
    int agree = 0; //동의한 사람의 수
    int disagree = 0; //동의하지 않은 사람의 수
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        bool s = 0;
        cin >> s;
        if(s == 1) agree++;
        else disagree++;
    }
    
    if(agree > disagree) cout << "Junhee is cute!\n";
    else cout << "Junhee is not cute!\n";
}
