#include "iostream"
#include "car.h"
#include "util.h"

using namespace std;

int main(void)
{
    Car c("Subaru", "Legacy", 2005, 5, tDriveTrain::awd);
    cout << c;
    return 0;
}
