#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	vector <int> result{ 0,0,0,0 };
	auto n = 0;
	cin >> n;
	string company = "";
	string shop = "";
	string cotegory = "";
	auto price = 0;
	auto maxA = 500001;
	auto maxB = 500001;
	auto maxC = 500001;
	auto maxD = 500001;
	for (auto i = 0; i < n; i++) {
		cin >> company >> shop >> cotegory >> price;
		if (cotegory == "A") {
			if (price == maxA) {
				result[0]++;
			}
			if (price < maxA) {
				result[0] = 0;
				result[0]++;
			}
		}
		if (cotegory == "B") {
			if (price == maxB) {
				result[1]++;
			}
			if (price < maxB) {
				result[1] = 0;
				result[1]++;
			}
		}
		if (cotegory == "C") {
			if (price == maxC) {
				result[2]++;
			}
			if (price < maxC) {
				result[2] = 0;
				result[2]++;
			}
		}
		if (cotegory == "D") {
			if (price == maxD) {
				result[3]++;
			}
			if (price < maxD) {
				result[3] = 0;
				result[3]++;
			}
		}
	}
 for (auto i = 0; i < 4; i++) { 
	cout << result[i] << " ";
}
}