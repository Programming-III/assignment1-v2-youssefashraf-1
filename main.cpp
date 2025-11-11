#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;
void Persondisplay() {
    cout << "Person: " << name << " (ID: " << id << ")\n";
}

void Studentdisplay() {
    cout << "Student: " << getName()
              << " (ID: " << getId() << ")\n"
              << "Year Level: " << yearlevel << "\n"
              << "Major: " << major << "\n";
}
void Instructordisplay() {
    cout << "Instructor: " << getName()
              << " (ID: " << getId() << ")\n"
              << "Department: " << department << "\n"
              << "Experience: " << experienceYears << " years\n";
}
int main() {
       Instructor inst("Dr.linakhaled", 101, "Computer Science", 5);
    Student stu("Omar Nabil", 2202, 2, "Informatics");

    inst.display();
    cout << "----\n";
    stu.display();
    
    return 0;
}
