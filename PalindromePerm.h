#include <iostream>
#include <string.h>
#include <string>
#include <vector>

using namespace std;

class PalindromePerm
{
private:
	int size;
	vector<int> num_chars;
	string input;

public:
	PalindromePerm(string data);
	const static int num_args = 1;
	void CheckIfPalin();
	~PalindromePerm();
};

