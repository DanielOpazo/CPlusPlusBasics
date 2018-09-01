#include <iostream>
#include "vector.h"

using namespace std;

int main(void) {
	Vector v = Vector{10};
	v[5] = 5;
	cout << "vector size is " << v.size() << "\n";
	cout << "vector at 5 is " << v[5] << "\n";
}
