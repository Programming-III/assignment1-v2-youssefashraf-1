#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;
class Person {
private:
    std::string name;
    int id;

public:
    Person() : name(""), id(0) {}
    Person(string name, int id) : name(std::move(name)), id(id) {}


    const string& getName()
    const {
        return name;
    }
    int getId()
    const {
        return id;
    }

 
    void setName(const string& n) {
        name = n;
    }
    void setId(int i) {
        id = i;
    }

   
    void display();
};

#endif
