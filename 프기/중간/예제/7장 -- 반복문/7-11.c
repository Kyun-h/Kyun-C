#include <stdio.h>

int main(void) {
	int input;
	while (1) {
		printf("양의 정수 또는 0[종료] 입력 후 [ENTER] >> ");
		scanf("%d", &input);
		if (input == 0)
			break;
		printf("입력한 정수 %d: 16진수 %#x\n", input, input);

		puts("종료");
	}

	return 0;
}