/**
 * Comment
 *
 * Covariance helps to avoid downcasting and dynamic type checking
 * 
 * Since smart pointers are class types, they cannot support covariance.
 */

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
 * No Covariance
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
