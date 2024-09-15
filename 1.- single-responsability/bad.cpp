#include <iostream>
#include <string>

class Student 
{
 public:
    Student (auto firstName, auto lastName, auto grade) : m_firstName(firstName),
                                                          m_lastName(lastName),
                                                          m_grade(grade)
    {
    }

    /**
     *  Principle violation: print function is not related to student class handling
     * 
    */
    void printStudentData()
    {
        std::cout << "Name: " << m_firstName + " " + m_lastName << std::endl;
        std::cout << "Grade: " << m_grade << std::endl;
    }

 private:
    std::string m_firstName;
    std::string m_lastName;
    int m_grade;

};