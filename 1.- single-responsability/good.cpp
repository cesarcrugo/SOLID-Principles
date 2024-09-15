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
     * Created a couple of getters
     * 
    */
    std::string getName() const
    {
        return m_firstName + " " + m_lastName;
    }

    int getGrade() const
    {
        return m_grade;
    }

 private:
    std::string m_firstName;
    std::string m_lastName;
    int m_grade;

};

/**
 * Created a dedicated class with the single responsibility
 * of removing 
 * 
*/
class Printer {
 public:
    static void printStudentData(Student &student)
    {
        std::cout << "Name: " << student.getName() << std::endl;
        std::cout << "Grade: " << student.getGrade() << std::endl;
    }
};