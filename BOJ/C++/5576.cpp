#include <iostream>
#include <algorithm>
using  namespace std;

int main() {
    int w[10]={};
    int k[10]={};
    
    for(int i=0; i < 20; i++){
        if (i < 10) cin >> w[i];
        else cin >> k[i-10];
    }
    
    sort(w, w+10);
    sort(k, k+10);
    
    cout << w[7]+w[8]+w[9] << " " << k[7]+k[8]+k[9] << endl;
    
}
