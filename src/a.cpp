#include "a.h"

#include <iostream>

using std::cout;
using std::endl;

A::A() {
	cout << "A constructed" << endl;
}

A::~A() {
	cout << "A destructed" << endl;
}
