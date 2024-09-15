#include <iostream>
#include <string>
#include <exception>

enum Subject {
    math,
    literature,
    physics
};

class Schedule
{
 public:
    /**
     * OCP principle violation: implementation will need modification for
     * other Subjects.
     * 
    */
    std::string instructor (Subject subject)
    {
        if (subject == Subject::math)
        {
            return "Mr Cruz";
        }
        else if (subject == Subject::literature)
        {
            return "Mr Gonzalez";
        }
        else if (subject == Subject::physics)
        {
            return "Mr Cruz";
        }
        else 
        {
            throw std::invalid_argument("Subject not registered!");
        }
    }   
};