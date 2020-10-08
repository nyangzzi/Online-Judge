#include <iostream>
using namespace std;

int main(){
    
    int n=0;
    cin >> n;
    
    int apple=0;
    int student=0;
    
    int sum=0;
    
    for(int i=0; i<n;i++){
        cin >> student >> apple;
        sum += (apple%student);
     }
     cout << sum<< endl;   
}
