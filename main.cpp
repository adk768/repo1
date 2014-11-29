#include <iostream>
#include "add.h"
#include "multiply.h"

using namespace std;

int main()
{
	cout << sum(2, multiply(3, 4)) << endl;
	return 0;
}
