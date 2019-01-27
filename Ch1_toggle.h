#pragma once
#include <iostream>
#include <string.h>
#include <vector>
#include "UniqueChars.h"
#include "PalindromePerm.h"

using namespace std;

class Ch1_toggle
{
private:
	string function;
	string funcs[3] = {"UniqueChars", "PalindromePerm", "exit"}; //CHANGE AS SIZE INCREASESs
	string tooltip[3] = { "Function which takes a string, and determines if chars in string are unique.", "Function which takes a string, and determines if a palindrome can be constructed from it.", "Exits the program."}; //CHANGE AS SIZE INCREASES
	vector<string> data;
	int num_args = 0;


public:
	Ch1_toggle();
	~Ch1_toggle();
};

