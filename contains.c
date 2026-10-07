#include <stdio.h>

int contains(int item, int arr[], int size) {
	for (int i = 0; i< size; i++)  {
		if (item == arr[i]) {
		return 1; 
		}
	}
	return 0;
}

int main() {
	int arr[] = {2, 9, 2, 0, 2, 5};
	int num = 2;
	int length = 6;
	contains(num, arr, length);
	printf("Result: %d\n", 0);
	return 0;
}
