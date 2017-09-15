/* it's more work than it's worth to convert from type to string programatically,
 * since it varies per compiler, platform, c++ standard, so use these functions instead,
 * since I'm only writing them for a few types
 */
#include "writers.h"

void write(const bool & arg)
{
    printTypeAndValue("bool", arg);
}

void write(const char & arg)
{
    printTypeAndValue("char", arg); 
}

void write(const int & arg)
{
    printTypeAndValue("int", arg);
}

void write(const double & arg)
{
    printTypeAndValue("double", arg);
}

void write(const string & arg)
{
    printTypeAndValue("string", arg);
}
