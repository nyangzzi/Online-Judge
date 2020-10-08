#include <iostream>
using namespace std;

int main(){
    int arr[4]={};
    cin>> arr[0]>>arr[1]>>arr[2]>>arr[3];
    
    if( (arr[0]+arr[3]) < ( arr[1]+arr[2]) ) cout << arr[0]+arr[3] <<endl;
    else cout << arr[1] + arr[2] <<endl;
}
