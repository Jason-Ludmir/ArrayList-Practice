#include "UniqueChars.h"
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

UniqueChars::UniqueChars(string data)
{
	size = data.length();
	unique_chars.resize(0);
	bool zero = 0;
	unique_chars.insert(unique_chars.begin(), 256, zero); //Create array with the length of the number of ASCII chars
	input = data;
}

int UniqueChars::DetermineUniqueness()
{
	for (int i = 0; i < size; i++) {
		int index = (int)input[i];

		//cout << "Index checked: " << index << endl;

		if (unique_chars.at(index) == 0) {
			unique_chars.at(index) = 1;
		}
		else {
			cout << "Char repeated: " << input[i] << endl;
			return 0;
		}
	}

	cout << "No repeated chars!" << endl;
	return 1;
}

UniqueChars::~UniqueChars()
{
}