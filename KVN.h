#pragma once
#include "Student.h"
class KVN : public Student
{
protected:
    std::string team;

public:
    KVN(const std::string& name, int age, const std::string& team);
    void saveFile(std::ostream& out);
    void append(const std::string& filename);
};

