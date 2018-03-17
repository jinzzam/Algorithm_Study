//#include<stdio.h>
//#include<string.h>	//memmove함수 사용을 위해
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
//		}		책에 있는대로 따라했더니 제대로 안된다 ㅋㅋ*/
//	}
//}
//
////****memmove()함수
////C 표준 함수로서, 메모리의 내용을 이동시키는 기능
////배열처럼 연속된 데이터를 단번에 이동시킬 때 아주 유용
////memmove(원본 데이터가 옮길 새로운 메모리 주소, 원본 데이터가 있는 주소, 이동시킬 데이터의 양(byte));
////
////****memcpy()함수
////memmove와 비슷함
////원본 데이터를 대상 메모리 주소로 복사한다
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
