#ifndef COURSE_H
#define COURSE_H

#include <string>

class Student; 

class Course {
private:
    std::string courseCode;
    std::string courseName;
    int maxStudents;
    Student* students;
    int currentStatus;

public:
    void addStudent(const Student& s);
    void displayInfo();
};

#endif // COURSE_H
