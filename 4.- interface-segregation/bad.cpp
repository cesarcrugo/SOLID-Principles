class IShape
{
 public:
    virtual double volume() = 0;
    virtual double area() = 0;
};

class Rectangle : public IShape
{
 public:
    /**
     * Principle violation
     * 
     * Rectangle is a 2D shape, and thus, does
     * not have a volume. IShape interface forces
     * Rectangle to implement a unnecessary function.
     */
    double volume () override;
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