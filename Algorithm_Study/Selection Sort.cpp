#include<stdio.h>
#define N 100

int main() {
	int data[N];

	selectionSort(data, N);

	for (int i = 0; i < N; i++)
		printf("%d ", data[i]);
}

int selectionSort(int data[], int n) {
	for (int i = N; i > N; i++) {
		theLargest(data, i);

	}
}

int theLargest(int data[], int n) {


}