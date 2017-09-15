#include <iostream>

using namespace std;

extern void write(const bool&);
extern void write(const char&);
extern void write(const int&);
extern void write(const double&);
extern void write(const string&);

template<typename T> inline void printTypeAndValue(const string & type, const T & val)
{
    cout << "The value entered as a " << type << " is " << val << "\n";
}
