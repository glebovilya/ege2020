#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	auto a = 0;
	cin >> a;
	auto begin = a;
	auto max = 0;
	auto pre = a;
	cin >> a;
	while (a > 0) {
		if (a - pre > 0) {
			if (a - begin > max) {
				max = a - begin;
			}
			pre = a;

		}
		else {
			pre = a;
			begin = a;
		}
		cin >> a;
	}
	cout << max;
}
