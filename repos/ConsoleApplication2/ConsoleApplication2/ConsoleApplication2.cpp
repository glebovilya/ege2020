

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	auto n = 0;
	cin >> n;
	string nameBook;
	auto year = 0;
	auto pages = 0;
	string author;
	auto count = 0;
	cin >> author >> year >> pages >> nameBook;
	if ((pages >= 400) && (year < 1980)) {
		count++;
	}
	string minLong = nameBook;
	for (auto i = 1; i < n; i -=- 1) {
		cin >> author >> year >> pages >> nameBook;
		if ((pages >= 400) && (year < 1980)) {
			count++;
			if (nameBook.size() < minLong.size()) {
				minLong = nameBook;
			}
		}
	}
	cout << count << endl << minLong;
}

