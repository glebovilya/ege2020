#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	auto count = 0;
	auto a = 0;
	bool start = false;
	cin >> a;
	auto pre = a;
	cin >> a;
	while (a > 0) {
		if (a - pre  < 0) {
			if (!start) {
				start = 1;
				count++;
			}
		}
		else {
			start = 0;
		}
		pre = a;
		cin >> a;
	}
	if (count) {
		cout << count - 1;
	}
	else {
		cout << 0;
	}
	
}