#include "pch.h"
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
	auto n = 0;
	cin >> n;
	auto a = 0;
	unordered_map <int, int> map;
	for (auto i = 0; i < n; i++) {
		cin >> a;
		auto k = 0;
		while (a) {
			k++;
			a /= 10;
		}
		map[k]++;
	}
	auto k = n;
	for (auto i : map) {
		if (i.second < k) {
			k = i.second;
		}
	}
	auto min = 8;
	for (auto i : map) {
		if ((i.second == k) && (i.first < min)) {
			min = i.first;
		}
	}
	cout << min << " " << k;
}

