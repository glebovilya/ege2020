#include "pch.h"
#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main()
{
	auto n = 0;
	auto x = 0;
	auto y = 0;
	auto minX = 1000000;
	auto minY = 0;
	auto maxX = -1000000;
	auto maxY = 0;
	cin >> n;
	for (auto i = 0; i < n; i++) {
		cin >> x >> y;
		if (y == 0) {
			if (x < minX) {
				minX = x;
			}
			if (x > maxX) {
				maxX = x;
			}
		}
		if (y > maxY) {
			maxY = y;
		}
		if (y < minY) {
			minY = y;
		}
	}
	auto sum = (maxX - minX)*maxY*0.5 + (maxX - minX)*abs(minY)*0.5;
	cout << sum;
}

