#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <string>
#include "Person.h"
using namespace std;
class Instructor : public Person {
private:
    string department;
    int experienceYears;

public:
    Instructor() : department(""), experienceYears(0) {}
    Instructor(string name, int id, string department, int experienceYears)
    : Person(move(name), id),
      department(move(department)),
      experienceYears(experienceYears) {}

    const string& getDepartment() const { return department; }
    int getExperienceYears() const { return experienceYears; }

    void setDepartment(string d) { department = move(d); }
    void setExperienceYears(int y) { experienceYears = y; }

    void display();
};

#endif 

