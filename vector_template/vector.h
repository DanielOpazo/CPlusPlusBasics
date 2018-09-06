#include <cstring>

template<typename T>
class Vector {
	public:
		explicit Vector(int s);
		//Vector(std::initializer_list<double> lst);
		Vector(const Vector& v); //copy constructor
		Vector& operator=(const Vector& v); //copy assignment
		Vector(Vector&& v); //move constructor
		Vector& operator=(Vector&& v); //move assignment
		~Vector();
		T& operator[](int i);
		int size() const;
	private:
		T * elem;
		int sz;
};

//implementations here because templates
template<typename T>
Vector<T>::Vector(int s)
{
	if (s < 0) {
		throw std::length_error{"Vector::Vector"};
	}
	elem = new T[s];
	memset(elem, 0, s);
	sz = s;
}

template<typename T>
Vector<T>::Vector(const Vector& v)
	: elem{new T[v.sz]}, sz{v.sz}
{
	//copy elements over
	for (int idx = 0; idx < v.sz; ++idx) {
		elem[idx] = v.elem[idx];
	}
}

template<typename T>
Vector<T>& Vector<T>::operator=(const Vector& v)
{
	delete[] elem;
	elem = new T[v.sz];
	for (int idx = 0; idx < v.sz; ++idx) {
		elem[idx] = v.elem[idx];
	}
	sz = v.sz;
	return *this;
}

template<typename T>
Vector<T>::Vector(Vector&& v)
	: elem{v.elem}, sz{v.sz}
{
	v.elem = nullptr;
	v.sz = 0;
}

template<typename T>
Vector<T>& Vector<T>::operator=(Vector&& v)
{
	delete[] elem;
	elem = v.elem;
	sz = v.sz;
	v.elem = nullptr;
	v.sz = 0;
	return *this;
}

template<typename T>
inline Vector<T>::~Vector()
{
	delete[] elem;
}

template<typename T>
T& Vector<T>::operator[](int i)
{
	if (i < 0 || i >= size()) {
		throw std::out_of_range{"Vector::operator[]"};
	}
	return elem[i];
}

template<typename T>
inline int Vector<T>::size() const
{
	return sz;
}

