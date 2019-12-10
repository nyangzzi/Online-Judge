#include <iostream>
 using namespace std;

 int main() {
 	int e, s, m;
 	cin >> e >> s >> m;

 	int year = 1;
 	int e1 = 1, s1 = 1, m1 = 1;
 
	while (1) {
 		if (e == e1 && s == s1 && m == m1) break;
 
		year++; e1++; s1++; m1++;

 		if (e1 == 16) e1 = 1;
 		if (s1 == 29) s1 = 1;
 		if (m1 == 20) m1 = 1;
 	}

 	cout << year << endl;

 }


