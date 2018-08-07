#include "car.h"
#include "util.h"
#include "sstream"

using namespace std;

//would it be better to make a class for drivetrain, with
//at least an enum field and a << operator?
string to_string(const tDriveTrain& dt)
{
    switch (dt) {
    case tDriveTrain::fwd: return "front-wheel drive";
    case tDriveTrain::rwd: return "rear-wheel drive";
    case tDriveTrain::awd: return "all-wheel drive";
    default:               return "unknown";
    }
}
