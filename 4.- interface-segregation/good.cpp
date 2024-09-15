/**
 * Option 1: IShape can be modified.
 */

class IShape
{
 public:
    virtual double volume() = 0;
    virtual double area() = 0;
};

class IShapeAdapter2D : public IShape
{
/**
 * Within the adapter, unnecessary functionality is made
 * unaccessible, and prevents consumers from having to
 * implement it.
 */
 private:
    double volume() override;
};

class Rectangle : public IShapeAdapter2D
{
 public:
    double area () override;

 private:
    int m_width;
    int m_height;
};

class Cube : public IShape
{
 public:
    double volume () override;
    double area () override;

 private:
    int m_length;
};