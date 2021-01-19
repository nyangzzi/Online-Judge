#include <iostream>
using namespace std;

int main(){
    int test = 0;
    cin >> test;
    
    for(int t = 1; t <= test; t++){
    	int fh =0, fm =0, sh=0, sm =0;
        cin >> fh >> fm >> sh >> sm;
        
        fh += sh;
        fm += sm;
        
        if(fm >= 60) {
        	fm -= 60;
            fh++;
        }
        if(fh > 12){
        	fh -= 12;
        }
        
        cout << "#" << t << " " << fh << " " << fm <<endl;
    }
    
}
