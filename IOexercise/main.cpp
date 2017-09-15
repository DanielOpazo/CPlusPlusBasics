#include "readers.h"
#include "writers.h"

int main()
{
    bool boolVal;
    read(boolVal);
    write(boolVal);

    char charVal;
    read(charVal);
    write(charVal);

    int intVal;
    read(intVal);
    write(intVal);

    double doubleVal;
    read(doubleVal);
    write(doubleVal);

    std::string strVal;
    read(strVal);
    write(strVal);
}

