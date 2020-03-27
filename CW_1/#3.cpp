#include <iostream>
using namespace std;

int maxElem(int arr[],int n) {
	int max = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}

void fuct(int arr[], int n, int max) {
	for (int i = 0; i < n; ++i) {
		if (arr[i] % 3 == 0 && arr[i] < max) {
			cout << arr[i] << "\t";
		}
	}
}


int main() {
	const int n = 10;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		int temp = 0;
		cin >> temp;
		arr[i] = temp;
	}

	int max = maxElem(arr, n);

	fuct(arr, n, max);

}