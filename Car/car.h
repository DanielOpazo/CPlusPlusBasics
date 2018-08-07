#include "string"
#include "types.h"

class Car {
    public:
        Car() = delete;
        Car(std::string make, std::string model, int year, int numSeats, tDriveTrain driveTrain):
            make{make},
            model{model},
            year{year},
            numSeats{numSeats},
            occupants{new int[numSeats]},
            driveTrain{driveTrain}
        {}
        friend std::ostream& operator << (std::ostream&, const Car&);
        //make an add passenger method, that throws exceptions if too many people are added
    private:
        std::string make;
        std::string model;
        int year;
        int numSeats;
        int * occupants; //replace int with an occupant type later (driver, passenger, etc). Also needs destructor to free array's memory       
        tDriveTrain driveTrain;
};
