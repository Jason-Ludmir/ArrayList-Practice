#pragma once
#include <string.h>
#include <vector>
#include <iostream>

using namespace std;

class UniqueChars
{
private:
	int size;
	vector<bool> unique_chars;
	string input;
	bool unique = 0;

public:
	UniqueChars(string data);
	int DetermineUniqueness();
	const static int num_args = 1;
	~UniqueChars();
};

