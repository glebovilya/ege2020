
#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	auto n = 0;
	cin >> n;
	vector <int> vec(6);
	auto min = pow(2,31)-1;
	auto temporary = 0;
	auto a = 0;
	for (auto i = 0; i < 6; i++) {
		cin >> vec[i];
	}
	for (auto i = 6; i < n; i++) {
		cin >> a;
		if ((vec[0]*a < min)&&(vec[0]*a %2 == 0)) 
		{
			min = vec[0] * a;
		}
		if (vec[0] < vec[1]){
			temporary = vec[0];
			vec[0] = vec[1];
			vec[1] = temporary;
		}
		for (auto j = 1; j < 5;j++) {
			vec[j - 1] = vec[j];
		}
		vec[5] = a;
	}
	if (min == pow(2, 31) - 1) {
		cout << -1;
	}
	else {
		cout << min;
	}
}

