#include <iostream>
#include <cmath>
using namespace std;

int sum(int n) {
	int sum = 0;
	for (int i = 2; i <= n; i++) {
		sum += pow(i, i + 1);
	}
	return sum;
}


int main() {
	int n = 0;
	cout << "Enter num: ";
	cin >> n;
	cout << "Sum :" << sum(n) << endl;
}