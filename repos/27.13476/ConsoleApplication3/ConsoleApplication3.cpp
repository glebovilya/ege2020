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
	auto maxodd = 0;
	auto maxeven = 0;
	for (auto i = 0; i < n; i++) {
		cin >> a;
		if ((a % 2 == 0)&&(a > maxeven)) {
			maxeven = a;
		}
		if ((a % 2 == 1) && (a > maxodd)) {
			maxodd = a;
		}
	}
	auto R = 0;
	cin >> R;
	if ((maxeven)&&(maxodd)){
		cout << "Вычисленное контрольное значение: " << maxeven + maxodd << endl;
	}
	if (!maxeven || !maxodd || maxeven + maxodd != R) {
		cout << "Контроль не пройден";
	}
	else {
		cout << "Контроль пройден";
	}
}
