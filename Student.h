#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Person.h"

class Student : public Person {
private:
    int yearlevel;
    std::string major;

public:
    Student() : yearlevel(0), major("") {}
    Student(std::string name, int id, int yearlevel, std::string major)
    : Person(std::move(name), id), yearlevel(yearlevel), major(std::move(major)) {}

    int getYearLevel() const { return yearlevel; }
    const std::string& getMajor() const { return major; }

    void setYearLevel(int yl) { yearlevel = yl; }
    void setMajor(std::string m) { major = std::move(m); }

    void display();
};

#endif
