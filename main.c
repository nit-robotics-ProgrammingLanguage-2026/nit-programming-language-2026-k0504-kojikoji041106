#include <stdio.h>

int main(void)
{
	int inputValue;
	scanf("%d", &inputValue);

	// 0未満、10以上12未満、15以上の整数はNGとする。
	// それ以外の整数はOKとする。
	int isAccepted = !(inputValue < 0 ||
					   (inputValue >= 10 && inputValue < 12) ||
					   inputValue >= 15);

	if (isAccepted) {
		printf("OK");
	} else {
		printf("NG");
	}

	return 0;
}
