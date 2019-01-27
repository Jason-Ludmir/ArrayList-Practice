#include "Ch1_toggle.h"
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include "UniqueChars.h"

using namespace std;

Ch1_toggle::Ch1_toggle()
{
	string problem;
	cout << "Enter problem (case insensitive), type 'exit' to exit, or type 'help' for help: ";
	getline(cin, problem);
	function = problem;
	for (int i = 0; i < problem.length(); i++) {
		function[i] = tolower(function[i]);
	}
	int func_id;

	//Get num_Args_needed here
	if (function.compare("uniquechars") == 0) {
		num_args = UniqueChars::num_args;
		func_id = 1;
	}
	else if (function.compare("exit") == 0) {
		exit(0);
	}
	else if (function.compare("help") == 0) { //CHANGE AS SIZE INCREASES
		for (int i = 0; i < 2; i++) {
			cout << funcs[i] << ": " << tooltip[i] << endl;
		}
		return;
	}
	//CHANGE AS SIZE INCREASES
	else {
		cout << "No such function. Continuing." << endl;
		return;
	}

	for (int i = 0; i < num_args; i++) {
		cout << "Enter arg " << i << ": ";
		string arg;
		getline(cin, arg);
		data.push_back(arg);
	}

	switch(func_id){ //CHANGE AS SIZE INCREASES
		case 1:
			UniqueChars uc(data.at(0));
			cout << "Checking string for uniqueness: " << data.at(0) << endl;
			bool ret = uc.DetermineUniqueness();
			break;
		//Add more cases here
	}
}


Ch1_toggle::~Ch1_toggle()
{
}