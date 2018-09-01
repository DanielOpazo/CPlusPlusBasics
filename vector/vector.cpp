#include "vector.h"

double& Vector::operator[](int i) {
	return elem[i];
}

int Vector::size() {
	return sz;
}
