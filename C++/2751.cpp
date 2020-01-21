//시간초과를 방지하기 위해 scanf와 printf를 이용하여 입출력
#pragma warning(disable: 4996)

#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {

	int n = 0;
	int arr[1000000] = {};

	scanf("%d", &n);
	
	for (int N = 0; N < n; N++) {
		scanf("%d", &arr[N]);
	}

	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
}
