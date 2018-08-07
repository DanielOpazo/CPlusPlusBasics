#include "iostream"
#include "car.h"
#include "util.h"

ostream & operator <<(ostream & outs, const Car & car)
{
    return outs << "make: " << car.make << "\tmodel: " << car.model << "\tyear: " << car.year << "\tseats: " << car.numSeats << "\tdrivetrain: " << to_string(car.driveTrain) << "\n";
}
