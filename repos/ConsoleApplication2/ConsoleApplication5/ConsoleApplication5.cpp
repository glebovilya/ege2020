

#include "pch.h"
#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int x;
	int min;
	int min1;
	int n;
	vector <int> vec;
	cin >> n;
	for (auto i = 0; i < 6; i++) {
		cin >> vec[i];
	}
	min = 20001;
	min1 = 10001;
	for (auto i = 6; i < n; i++) {
		cin >> x;
		if (vec[1] < min1) {
			min1 = vec[1];
		}
		if (x + min1 < min) {
			min = x + min1;
		}
		for (auto j = 0; j < 5; i++) {
			vec[j] = vec[j + 1];
			vec[5] = x;

		}
			
	}
	cout << min
}
