#include <stdio.h>
using namespace std;

int main() {
	
	int k = 0;
	scanf("%d", &k);
	int a = 0;
	int b = 0;
	for (int i = 0; i < k; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

}
