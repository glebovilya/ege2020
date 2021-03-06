#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	auto a = 0;
	auto b = 0;
	auto n = 0;
	auto sum = 0;
	cin >> n;
	auto minDiff = 1001;
	for (auto i = 0; i < n; i++) {
		cin >> a >> b;
		if (a > b) {
			sum += pow(a,2);
		}
		else {
			sum += pow(b,2);
		}
		auto diff = std::abs(a*a - b*b);
		if ((diff % 2) && (diff < minDiff)) {
			minDiff = diff;
		}
	}
	if (sum % 2) {
		cout << sum;
	}
	else {
		sum -= minDiff;
		cout << sum;
	}
}
