#include <iostream>
#include <string>
#include <exception>

/**
 * ISubject implements a subject interface with the 
 * Template Method: interface is stable and not virtual,
 * while customizable behavior is nonpublic virtual.
 * 
 * Template method separates interface from implementation
 * detail, which further enhance encapsulation.
 */
class ISubject {
 public:
    std::string instructor() const
    {
        doInstructor();
    }

 private:
    virtual std::string doInstructor() const = 0;
};

/**
 * Many subject methods can be abstracted, such that there
 * is not redundant implementation.
 */
class AbstractSubject : ISubject {
 public:
    AbstractSubject (std::string instructorName) : m_instructorName(instructorName){};

 private:
    std::string doInstructor() const
    {
        return m_instructorName;
    }
    std::string m_instructorName;
};

class Math : AbstractSubject {
 public:
    Math (std::string instructorName) : AbstractSubject(instructorName){}
};

class Literature : AbstractSubject {
 public:
    Literature (std::string instructorName) : AbstractSubject(instructorName){}
};

class Physics : AbstractSubject {
 public:
    Physics (std::string instructorName) : AbstractSubject(instructorName){}
};

/**
 * This is compliant with Open Close Principle. If any subject is to be added, 
 * implementation will not impact any existing.
 */
class Schedule
{
 public:
    std::string instructor (const ISubject &subject)
    {
        return subject.instructor();
    }   
};