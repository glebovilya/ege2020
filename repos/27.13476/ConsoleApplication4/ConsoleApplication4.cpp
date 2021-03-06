#include "pch.h"
#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main()
{
	auto n = 0;
	cin >> n;
	unordered_map <int, int> fourthCount;
	unordered_map <int, int> fourthMin;
	unordered_map <int, int> minX;
	unordered_map <int, int> minY;
	auto x = 0;
	auto y = 0;
	auto minValue = 0;
	for (auto i = 0; i < n; i++) {
		cin >> x >> y;
		if (x > 0 && y > 0) {
			fourthCount[1]++;
			minValue = min(abs(x), abs(y));
			if (fourthMin.count(1)) {
				auto current = fourthMin[1];
				if (minValue < current) {
					fourthMin[1] = minValue;
					minX[1] = x;
					minY[1] = y;
				}

			}
			else {
				fourthMin[1] = minValue;
				minX[1] = x;
				minY[1] = y;
			}
		}
		if (x < 0 && y > 0) {
			fourthCount[2]++;
			minValue = min(abs(x), abs(y));
			if (fourthMin.count(2)) {
				auto current = fourthMin[2];
				if (minValue < current) {
					fourthMin[2] = minValue;
					minX[2] = x;
					minY[2] = y;
				}

			}
			else {
				fourthMin[2] = minValue;
				minX[2] = x;
				minY[2] = y;
			}
		}
		if (x < 0 && y < 0) {
			fourthCount[3]++;
			minValue = min(abs(x), abs(y));
			if (fourthMin.count(3)) {
				auto current = fourthMin[3];
				if (minValue < current) {
					fourthMin[3] = minValue;
					minX[3] = x;
					minY[3] = y;
				}

			}
			else {
				fourthMin[3] = minValue;
				minX[3] = x;
				minY[3] = y;
			}
		}
		if (x > 0 && y < 0) {
			fourthCount[4]++;
			minValue = min(abs(x), abs(y));
			if (fourthMin.count(4)) {
				auto current = fourthMin[4];
				if (minValue < current) {
					fourthMin[4] = minValue;
					minX[4] = x;
					minY[4] = y;
				}

			}
			else {
				fourthMin[4] = minValue;
				minX[4] = x;
				minY[4] = y;
			}
		}
	}
	auto k = 0;
	for (auto i : fourthCount) {
		if (i.second > k) {
			k = i.first;
		}
	}
	cout << "K = " << k << endl << "M = " << fourthCount[k] << endl << "A = (" << minX[k] << ", " << minY[k] << ")" << endl << "R = " << fourthMin[k];
}
