#include <cstring>
#include <iostream>
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

/* can't coexist with Vector(int s)
Vector::Vector(std::initializer_list<double> lst)
	: elem{new double[lst.size()]}, sz{static_cast<int>(lst.size())}
{
	std::cout << "is it still me\n";
	std::copy(lst.begin(), lst.end(), elem);
}
*/


Vector::Vector(const Vector& v)
	: elem{new double[v.size()]}, sz{v.size()}
{
	for (int i = 0; i < v.size(); ++i) {
		elem[i] = v.elem[i];
	}
}

Vector::~Vector() {
	delete[] elem;
}

Vector& Vector::operator=(const Vector& v) {
	double *p = new double[v.sz];
	for (int i = 0; i < v.sz; ++i) {
		p[i] = v.elem[i];
	}
	delete[] elem; //delete what I had before
	elem = p;
	sz = v.sz;
	return *this;
}

double& Vector::operator[](int i) {
	if (i < 0 || i >= size()) {
		throw std::out_of_range{"Vector::operator[]"};
	}
	return elem[i];
}

int Vector::size() const {
	return sz;
}
