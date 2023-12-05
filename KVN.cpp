#include "KVN.h"
#include <iostream>

KVN::KVN(const std::string& name, int age, const std::string& team) : Student(name, age), team(team) {}

void KVN::saveFile(std::ostream& out) 
{
    Student::saveFile(out);
    out << "Team: " << team << std::endl;
}
void KVN::append(const std::string& filename)
{
    Student::append(filename);

}