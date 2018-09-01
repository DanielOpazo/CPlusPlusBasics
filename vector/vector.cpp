#include <cstring>
#include <stdexcept>
#include "vector.h"

Vector::Vector(int s)
{
	if (s < 0) {
		throw std::length_error{"Vector::Vector"};
	}
	elem = new double[s];
	memset(elem, 0, s);
	sz = s;
}

Vector::~Vector() {
	delete[] elem;
}

double& Vector::operator[](int i) {
	if (i < 0 || i >= size()) {
		throw std::out_of_range{"Vector::operator[]"};
	}
	return elem[i];
}

int Vector::size() {
	return sz;
}
