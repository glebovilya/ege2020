#include "pch.h"
#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
	auto n = 0;
	cin >> n;
	auto a = 0;
	auto sum = 0;
	unordered_map <int, int> map;
	for (auto i = 0; i < n; i++) {
		cin >> a;
		sum = a % 100 / 10 + a % 10;
		map[sum]++;
	}
	auto k = n;
	for (auto i : map) {
		if (i.second < k) {
			k = i.second;
		}
	}
	auto min = 19;
	for (auto i : map) {
		if (i.second == k && i.first < min) {
			min = i.first;
		}
	}
	cout << min;
}

