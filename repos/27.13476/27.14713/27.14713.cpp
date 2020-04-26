
#include "pch.h"
#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
	auto n = 0;
	cin >> n;
	auto a = 0;
	auto temporary = 0;
	unordered_map <int, int> map;
	for (auto i = 0; i < n; i++) {
		cin >> a;
		temporary = a % 7;
		map[temporary]++;
	}
	auto sum = 0;
	if (map[1] != 0 && map[6] != 0) {
		sum += map[1] * map[6];
	}
	if (map[2] != 0 && map[5] != 0) {
		sum += map[2] * map[5];
	}
	if (map[3] != 0 && map[4] != 0) {
		sum += map[3] * map[4];
	}
	cout << sum;
}

