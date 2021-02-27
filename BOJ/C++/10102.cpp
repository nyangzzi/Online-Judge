#include <iostream>
#include <string>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int v = 0;
	cin >> v;
	int a = 0, b = 0;
	
	string vv;
	cin >> vv;
	for (int i = 0; i < v; i++) {
		if (vv[i] == 'A')a++;
		else b++;
	}

	if (a > b) cout << "A" << endl;
	else if (a < b) cout << "B" << endl;
	else cout << "Tie" << endl;

}
