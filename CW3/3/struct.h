#pragma once
#include <iostream>
using namespace std;
struct line {
	double k;
	double b;

	line(double dK = NULL, double dB = NULL) {
		k = dK;
		b = dB;
	}

	void check(double x, double y) {
		double sum = (k * x) + b;

		if (sum == y) {
			cout << "point on the line" << endl;
		}
		else
			cout << "Point not on the line" << endl;

	}
};