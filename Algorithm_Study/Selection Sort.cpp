#include<stdio.h>
#define N 10

int theLargest(int data[], int last) {	//가장 큰 수의 인덱스 반환
	int largeIndex = 0;
	for (int i = 0; i < last; i++) {
		if (data[i] > data[largeIndex]) {
			largeIndex = i;
		}
	}
	return largeIndex;
}

int selectionSort(int data[], int n) {	//선택정렬 실행
	int last = n - 1;
	int temp;
	for (int i = last; i >= 0; i--) {
		int k = theLargest(data, last);
		temp = data[k];
		data[k] = data[last];
		data[last] = temp;
		last--;
	}
	if (last == -1)
		return 1;
	else
		return -1;
}

int main() {
	int data[N] = { 8, 31, 48, 73, 3, 65, 20, 29, 11, 15 };

	//for (int i = 0; i < N; i++)
	//	printf("%d ", data[i]);
	//printf("\n");

	if (selectionSort(data, N) == 1) {
		for (int i = 0; i < N; i++)
			printf("%d ", data[i]);
	}
	else {
		printf("ERROR IN SORTING!!");
	}
	return 0;
}