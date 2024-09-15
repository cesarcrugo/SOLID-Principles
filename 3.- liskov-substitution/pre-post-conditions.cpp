#include <cassert>

/**
 * Incorrect
 * 
 * Deriving Square from Rectangle.
 */
class Rectangle 
{
 public:
    virtual void setHeight(int height)
    {
        int oldHeight = m_height;
        int oldWidth = m_width;

        m_height = height;

        /**
         * Pos-condition: check width remains the same.
         * 
         * Invariant: both dimensions cannot be set  at 
         * setHeight function.
         */
        assert (oldHeight != m_height);
        assert (oldWidth == m_width);
        
        /**
         * Precondition: m_width and m_height must remain 
         * different, or not a rectangle anymore.
         */
        assert (m_height != m_width);
    }

    virtual void setWidth(int width)
    {
        int oldHeight = m_height;
        int oldWidth = m_width;

        m_width = width;

        /**
         * Pos-condition: check height remains the same.
         * 
         * Invariant: both dimensions cannot be set  at 
         * setWidth function.
         */
        assert (oldHeight == m_height);
        assert (oldWidth != m_width);

        /**
         * Precondition: m_width and m_height must remain 
         * different, or not a rectangle anymore.
         */
        assert (m_height != m_width);
    }

 protected:
    int m_height;
    int m_width;   
};

class Square : public Rectangle
{
 public:
    virtual void setHeight(int height)
    {
        int oldHeight = m_height;
        int oldWidth = m_width;

        /**
         * Setting both dimensions because it is a square.
         * 
         * This violates pre, post and invariant conditions.
         */
        m_height = height;
        m_width = height;

        assert (oldHeight != m_height);
        assert (oldWidth == m_width);
        assert (m_height != m_width);
    }

    virtual void setWidth(int width)
    {
        int oldHeight = m_height;
        int oldWidth = m_width;

        /**
         * Setting both dimensions because it is a square.
         * 
         * This violates pre, post and invariant conditions.
         */
        m_height = width;
        m_width = width;

        assert (oldHeight == m_height);
        assert (oldWidth != m_width);
        assert (m_height != m_width);
    }
};

/**
 * Correct
 * 
 * Deriving Rectangle and Square from a Shape class, that 
 * may abstract functionalities that rectangle and square
 * have in common.
 */
class Shape
{
 public:
    virtual void area () = 0;
};

class Rectangle_ : Shape
{
    void setHeight(int height)
    {
        m_height = height;
    }

    void setWidth(int width)
    {
        m_width = width;
    }

    void area() override;

 protected:
    int m_height;
    int m_width;   
};

class Square_ : Shape
{
    void setWidth(int length)
    {
        m_length = length;
    }

    void area() override;

 protected:
    int m_length;
};
