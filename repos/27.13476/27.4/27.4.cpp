#include "pch.h"
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	string name;
	string lastName;
	auto num = 0;
	auto point = 0;
	auto n = 0;
	cin >> n;
	auto maxPoint = 0;
	unordered_map <int, vector<int>> numSch;
	for (auto i = 0; i < n; i++) {
		cin >>lastName>> name >> num >> point;
		numSch[num].push_back(point);
	}
	for (auto i : numSch) {
		sort(i.second.begin(), i.second.end());
	}
	auto count = 0;
	for (auto i : numSch) {
		if (i.second.size() > 1) {
			auto last = i.second[i.second.size() - 1];
			auto nearlyLast = i.second[i.second.size() - 2];
			if (last == nearlyLast) {
				cout << i.first << " ";
				count++;
				maxPoint = last;
			}
		}
	}
	if (count == 1) {
		cout << "max point is " << maxPoint;
	}
	if (count == 0) {
		cout << "No there schoole";
	}
}
