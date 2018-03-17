#include<stdio.h>

void BubbleSort(int Data[], int Length) {
	int i = 0, j = 0, temp = 0;

	for (i = 0; i < Length - 1; i++) {	//데이터 집합의 크기만큼 내부의 반복문 실행
		for (j = 0; j < Length - (i + 1); j++) {	//외부 반복문이 한 번 실행될 때마다 내부 반복문의 그 반복 횟수가 줄어든다
			if (Data[j] > Data[j + 1]) {
				temp = Data[j];
				Data[j] = Data[j + 1];
				Data[j + 1] = temp;
			}
		}
	}
}



int main() {
	int Data[] = { 6, 4, 2, 3, 1, 5 };
	int Length = sizeof(Data) / sizeof(Data[0]);
	int i = 0;

	BubbleSort(Data, Length);

	for (i = 0; i < Length; i++) {
		printf("%d ", Data[i]);
	}

	return 0;
}