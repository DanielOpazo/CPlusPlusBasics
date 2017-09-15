/*
 * Simple reading from user input examples.
 * It is kept deliberately simple (no input verification, exception handling, converting to proper types)
 * because that's a complex task, and it isn't the goal here
 */

#include <iostream>
#include <limits>

using namespace std;

const string prompt = "Enter a value\n";

template<typename T> inline void read(T & arg)
{
    cout << prompt;
    cin >> arg;

    /* since I'm using the >> operator to convert from the input stream string to my variables, if 
     * the type is not proper, it will tokenize the input, leaving tokens in the
     * cin buffer, which will be read by the next cin call. Take all the characters
     * out of the buffer until a newline
     */
    cin.clear();
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

}

