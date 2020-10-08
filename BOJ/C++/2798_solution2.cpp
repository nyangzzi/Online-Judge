//배열 두개를 이용하여 풀이

#include <iostream>
using namespace std;

int main() {

   int arr1[100] = {};
   short arr2[300001] = {};

   int n = 0, m = 0;
   cin >> n >> m;
   for (int i = 0; i < n; i++) {
      cin >> arr1[i];
   }

   int t = 0;
   for (int i = 0; i < n - 2; i++) {
      for (int j = i + 1; j < n - 1; j++) {
         for (int k = j + 1; k < n; k++) {
            t = arr1[i] + arr1[j] + arr1[k];
            if (t > 300000) continue;
            else   arr2[t]++;
         }
      }
   }

   for (int i = m; i > 0; i--) {
      if (arr2[i] >= 1) {
         cout << i << endl;
         break;
      }
   }
}
