#include <iostream> 
#include <array> 
using namespace std; 
int main() { 	
   array<int, 5> arr = {}; 	
   int down, up = 0; 	

   for (size_t i = 1; i < 5; i++) { 		
        cin >> down >> up; 		
        arr[i] = arr[i - 1] - down + up; 	
} 	
int max = arr[1]; 	
for (size_t i = 2; i < 5; i++) { 		
   if (max < arr[i]) { 			
   max = arr[i]; 		
   } 	
} 	
cout << max << "\n"; 	

}


