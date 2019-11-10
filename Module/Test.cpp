#include "Test.h"

Test::Test() {};

Test::Test(string Author) {
	author = Author;
}

string Test::GetCopyright() {
	return "Copyright " + author;
}
