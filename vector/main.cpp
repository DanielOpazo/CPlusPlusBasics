#include <iostream>
#include "vector.h"

using namespace std;

int main(void) {
	Vector v{10};
	v[5] = 5;
	cout << "vector size is " << v.size() << "\n";
	cout << "vector at 5 is " << v[5] << "\n";
	try {
		cout << v[11];
	} catch (out_of_range) {
		cout << "caught out of range\n";
	}

	Vector v2{v};
	cout << "copy constructor:\n";
	cout << "vector size is " << v2.size() << "\n";
	cout << "vector at 5 is " << v2[5] << "\n";

	Vector v3{5};
	v3 = v2;
	cout << "copy assignment:\n";
	cout << "vector size is " << v3.size() << "\n";
	cout << "vector at 5 is " << v3[5] << "\n";

}
