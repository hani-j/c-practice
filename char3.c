#include <stdio.h>

int compare(char *str1, char *str2);
int main() {
	char str1[] = "hello";
	char str2[] = "hello";

	if (compare(str1, str2)) {
		printf("일치");
	} else {
		printf("불일치");
	}

	return 0;
}
int compare(char *str1, char *str2) {
	while(*str1) {
		if (*str1 != *str2) {
			return 0;
		}

		str1++;
		str2++;
	}

	if (*str2 == '\0') return 1;

	return 0;
}

