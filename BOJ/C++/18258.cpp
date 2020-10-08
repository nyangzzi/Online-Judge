#pragma warning (disable: 4996)  //scanf를 이용 할 때 오류를 잡지 않겠다는 선언

//일반적인 cin이나 cout으로는 시간 초과
#include <stdio.h>
#include <stdlib.h>
#include <cstring>  //scanf로 입력받은 문자열을 비교하기 위한 함수 strcmp를 사용하기 위한 헤더파일

//클래스에 접근하는 시간을 줄이기 위하여 main 내부에 queue의 정의를 선언
int main() {
  
	int test = 0;
	char str[7] = {};

	int size = 0;
	int arr[2000000];
	int front = 0;
	int back = 0;

	scanf("%d", &test);

	int x = 0;
	for (int t = 0; t < test; t++) {
		scanf("%s", str);	//배열을 scanf에 넣을 때는 &를 붙이지 않는다

		if (!(strcmp(str, "push"))) { //두 문자열이 같은 경우 0이 반환된다
			scanf("%d", &x);
			arr[back] = x;
			back++;
			size++;
		}
		else if (!(strcmp(str, "pop"))){
			if (size == 0) printf("-1\n");
			else {
				printf("%d\n", arr[front]);
				front++;
				size--;
			}
		}
		else if (!(strcmp(str, "size"))) {
			printf("%d\n", size);
		}
		else if (!(strcmp(str, "empty"))) {
			if (size == 0) printf("1\n");
			else printf("0\n");
		}
		else if (!(strcmp(str, "front"))) {
			if (size == 0)printf("-1\n");
			else printf("%d\n", arr[front]);
		}
		else if (!(strcmp(str, "back"))) {
			if (size == 0) printf("-1\n");
			else printf("%d\n",arr[back-1]);
		}
	}
}
