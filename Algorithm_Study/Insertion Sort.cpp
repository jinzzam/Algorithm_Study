//#include<stdio.h>
//#include<string.h>	//memmove�Լ� ����� ����
//
//void InsertionSort(int data[], int Length) {
//	int value = 0;
//
//	for (int i = 1; i < Length; i++) {
//		if (data[i - 1] <= data[i])
//			continue;
//		value = data[i];
//
//		int j = i - 1;
//		while (j >= 0 && data[j] > value) {
//			data[j + 1] = data[j];
//			j = j - 1;
//		}
//		data[j + 1] = value;
//
//		/*for (int j = 0; j < i; j++) {
//			if (data[j] > value) {
//				memmove(&data[j + 1], &data[j], sizeof(data[0] * (i - j)));
//				data[j] = value;
//				break;
//			}
//		}		å�� �ִ´�� �����ߴ��� ����� �ȵȴ� ����*/
//	}
//}
//
////****memmove()�Լ�
////C ǥ�� �Լ��μ�, �޸��� ������ �̵���Ű�� ���
////�迭ó�� ���ӵ� �����͸� �ܹ��� �̵���ų �� ���� ����
////memmove(���� �����Ͱ� �ű� ���ο� �޸� �ּ�, ���� �����Ͱ� �ִ� �ּ�, �̵���ų �������� ��(byte));
////
////****memcpy()�Լ�
////memmove�� �����
////���� �����͸� ��� �޸� �ּҷ� �����Ѵ�
//
//int main() {
//	int data[] = { 6, 4, 2, 3, 1, 5 };
//	int Length = sizeof(data) / sizeof(data[0]);
//	int i = 0;
//
//	InsertionSort(data, Length);
//
//	for (i = 0; i < Length; i++) {
//		printf("%d ", data[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
