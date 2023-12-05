#pragma once
#include <string>
class Student
{
protected:
    std::string name;
    int age;

public:
    Student(const std::string& name, int age);
    void saveFile(std::ostream& out);
    //void append(const std::string& filename);
    void append( const std::string& filename);
};

