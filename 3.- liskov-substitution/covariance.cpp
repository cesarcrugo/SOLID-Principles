class Vehicle
{
};

class Sedan : public Vehicle
{
};

class SUV : public Vehicle
{

};

/**
 * Incorrect
 * 
 * Return type of class Trip must be a base class of return 
 * type of class Business Trip, following covariance rule.
 */
/*
class Trip
{
 public:
    virtual Sedan & typeOfVehicle ();
};

class BusinessTrip : public Trip
{
 public:
    Vehicle & typeOfVehicle () override;
};
*/

// Correct
class Trip
{
 public:
    virtual Vehicle & typeOfVehicle ();
};

class BusinessTrip : public Trip
{
 public:
    Sedan & typeOfVehicle () override;
};