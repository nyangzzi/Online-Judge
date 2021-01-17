#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int t = 0;
    cin >>t;
    
    for(int test = 1; test<=t; test++){
    
    	int arr[10]= {};
    	for(int i = 0; i <10; i++){
    		cin >> arr[i];
    	}
    	sort(arr,arr+10);
    
		double sum = 0;
    	for(int i = 1; i<9; i++){
        	sum+=arr[i];
    	}
    	cout << "#" << test << " "<< (int)round(sum/8)<<endl;
    }
}
