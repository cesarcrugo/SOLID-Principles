
class Vehicle
{

};

class SUV : Vehicle
{
};

class Sedan : Vehicle
{
};

/**
 * Interface definition (abstraction), that
 * can be used for different automotive paint
 * shops definitions.
 */
class IPaintShop
{

};

class PaintShopCruz
{

};

class IPaintShopTheAvengers
{

};

class CarShop
{
 public:
    /**
     * Injecting paint shop dependency to the function.
     */
    void sendVehicleToPaint (Vehicle &suv, IPaintShop &paintShop);
};