#include <stdio.h>

int main() {
	int math, kor, eng, sum;
	int arr[5];
	int ary[5];
	int i, j;
	int k;

	for (i = 0; i < 5; i++) {
		scanf("%d %d %d", &math, &kor, &eng);
		sum = math + kor + eng;
		arr[i] = sum / 3;
	}

	for (i = 0; i < 5; i++) {
		k = 0;
		for (j = 0; j < 5; j++) {
			if (arr[i] < arr[j]) {
				k++;
			}
		}
		ary[k] = arr[i];
	}

	for (i = 0; i < 5; i++) {
		if(ary[i] > 80) {
			printf("%d번째 학생 평균 %d점 합격 \n", i+1, ary[i]);
		}else {
			printf("%d번째 학생 평균 %d점 불합격 \n", i+1, ary[i]);
		}
	}
}
