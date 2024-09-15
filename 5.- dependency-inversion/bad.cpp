
class SUV
{
};

class PaintShopCruz
{

};

/**
 * Principle violation
 * 
 * CarShop class depends on the specific concretion of
 * PaintShopCruz, and no possibility of making use of
 * a different paint shop is possible.
 * 
 * Also, only SUVs can be sent to paint, which also violates
 * Open Close Principle; if we need to send a Sedan to paint,
 * a new class would need to be created.
 */
class CarShop
{
 public:
    void sendSUVToPaint (SUV &suv, PaintShopCruz &paintShop);
};