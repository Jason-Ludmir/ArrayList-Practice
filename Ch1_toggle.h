#pragma once
#include "UniqueChars.h"
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class Ch1_toggle
{
private:
	string function;
	string funcs[2] = {"UniqueChars", "exit"}; //CHANGE AS SIZE INCREASESs
	string tooltip[2] = { "Function which takes a string, and determines if chars in string are unique.","Exits the program."}; //CHANGE AS SIZE INCREASES
	vector<string> data;
	int num_args = 0;


public:
	Ch1_toggle();
	~Ch1_toggle();
};

