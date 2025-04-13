

// Contains Flight Class

#ifndef FLIGHT_H
#define FLIGHT_H
#include <vector>
using namespace std;

class Customer;
class Flight
{
private:
    string flightNumber;      // unique identifier
    string flightorigin;      // from which city
    string flightdestination; // to which city
    string flightTime;        // time for flight in hours
    string flightDate;
    double distanceInKms;
    int numOfSeatsInFlight;

    vector<Customer> listOfCustomers;

public:
    Flight() {}

    Flight(string flightNumber, string origin, string destination, string time, string date, double distance, int seats)
        : flightNumber(flightNumber), flightorigin(origin), flightdestination(destination),
          flightTime(time), flightDate(date), distanceInKms(distance), numOfSeatsInFlight(seats) {}

    string getFlightNumber() const
    {
        return flightNumber;
    }

    string getOrigin() const
    {
        return flightorigin;
    }

    string getDestination() const
    {
        return flightdestination;
    }

    string getTime() const
    {
        return flightTime;
    }

    string getDate() const
    {
        return flightDate;
    }
};

#endif // FLIGHT_H
