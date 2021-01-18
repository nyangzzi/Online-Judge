#include<iostream>

using namespace std;

int main(int argc, char** argv){
	int test_case;
	int T;
	cin >> T;
	for(test_case = 1; test_case <= T; ++test_case) {

		int arr[4] = {};
        for(int i = 0; i < 4; i++){
        	cin >> arr[i];
        }
        
        int month = arr[0], day = arr[1];
        int cnt = 1;
        
        while(month <= arr[2]){
            if(month == arr[2]){
            	cnt += arr[3] - day;
                month++;
            }
            else if(month < arr[2]){
            	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 ||month == 12){
                    cnt += 31;
                    month++;
                }
                else if(month == 2 ){
                	cnt += 28;
                    month++;
                }
                else {
                	cnt += 30; 
                    month++;
                }
            }
        }
	
        cout << "#" << test_case << " " << cnt <<endl;

	}
	return 0;
}
