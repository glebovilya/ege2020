#include "pch.h"
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
	auto n = 0;
	cin >> n;
	auto current = 0;
	map <int, int> result;
	map <int, vector<int>> curRes;
	for (auto i = 0; i < n; i++) {
		cin >> current;
		result[current]++;
	}
	for (auto i : result) {
		curRes[i.second].
	}
}