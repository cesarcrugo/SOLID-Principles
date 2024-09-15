#include <iostream>
#include <exception>
#include <string>

class BaseException : public std::exception
{
 public:
    BaseException () : m_message("Throwing Base Exception!")
    {
    }

    const char* what() const throw()
    {
        return m_message.c_str();
    }

 private:
    std::string m_message;
};

class DerivedException : public BaseException
{
 public:
    DerivedException () : m_message("Throwing Derived Exception!")
    {
    }

    const char* what() const throw()
    {
        return m_message.c_str();
    }

 private:
    std::string m_message;
};

class BaseClass 
{
 public:
    virtual void throwException ()
    {
        try 
        {
            throw BaseException();
        }
        catch(std::exception& exception)
        {
            std::cout << "Caught exception: " << exception.what() << std::endl;
        }
    }
};

/**
 * Exception rule
 * 
 * New thrown exception is derived from exception thrown in BaseClass.
 */
class DerivedClass : BaseClass
{
 public:
    void throwException () override
    {
        try 
        {
            throw DerivedException();
        }
        catch(std::exception& exception)
        {
            std::cout << "Caught exception: " << exception.what() << std::endl;
        }
    }
};

