#pragma once
#include <string>

using namespace std;

class Test
{
private:
	string author;

public:
	Test();
	Test(string Author);
	string GetCopyright();
};

