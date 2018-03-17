#include<stdio.h>

void BubbleSort(int Data[], int Length) {
	int i = 0, j = 0, temp = 0;

	for (i = 0; i < Length - 1; i++) {	//������ ������ ũ�⸸ŭ ������ �ݺ��� ����
		for (j = 0; j < Length - (i + 1); j++) {	//�ܺ� �ݺ����� �� �� ����� ������ ���� �ݺ����� �� �ݺ� Ƚ���� �پ���
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