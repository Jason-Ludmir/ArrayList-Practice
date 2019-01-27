#include "PalindromePerm.h"
#include <iostream>
#include <string.h>
#include <string>
#include <vector>

using namespace std;


PalindromePerm::PalindromePerm(string data)
{
	size = data.length();
	num_chars.resize(0);
	int zero = 0;
	num_chars.insert(num_chars.begin(), 256, zero); //Create array with the length of the number of ASCII chars
	for (int i = 0; i < data.length(); i++)
		if (data[i] == ' ') 
			data.erase(i, 1);
	input = data;
}


PalindromePerm::~PalindromePerm()
{
}


void PalindromePerm::CheckIfPalin()
{
	for (int i = 0; i < size; i++) {
		int index = (int)input[i];
		num_chars.at(index)++;
	}

	int num_odd = 0;
	for (int i = 0; i < num_chars.size(); i++) {
		if (num_chars.at(i) % 2 == 0) {
			continue;
		}
		else if (num_odd == 0) {
			num_odd++;
		}
		else {
			cout << "False: Not a permutation of a palindrome." << endl;
			return;
		}
	}
	if (num_odd == 0) {
		cout << "False: Not a permutation of a palindrome." << endl;
		return;
	}
	cout << "True: Permutation of a palindrome." << endl;
}
