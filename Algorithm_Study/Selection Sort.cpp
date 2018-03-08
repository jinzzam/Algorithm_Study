#include<stdio.h>
#define N 11

int main() {
	int data[N] = {8, 31, 48, 73, 3, 65, 20, 29, 11, 15};

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