#pragma once
#include "Student.h"
class Actor : public Student
{
protected:
    std::string movie;

public:
    Actor(const std::string& name, int age, const std::string& movie);
    void saveFile(std::ostream& out);
    void append(const std::string& filename);
};

