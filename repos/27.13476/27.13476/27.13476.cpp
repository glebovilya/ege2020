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
		auto sum = a % 10 + a / 100 + a % 100 / 10;
		map[sum]++;
	}
	auto k = n;
	for (auto i : map) {
		if (i.second < k) {
			k = i.second;
		}
	}
	auto max = 0;
	for (auto i : map) {
		if ((i.second == k)&&(i.first > max)) {
			max = i.first;
		}
	}
	cout << max;

}

