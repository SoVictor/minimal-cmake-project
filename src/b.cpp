#include "b.h"

#include <iostream>

using std::cout;
using std::endl;

B::B() {
	cout << "B constructed" << endl;
}

B::~B() {
	cout << "B destructed" << endl;
}
