#include "Student.h"
#include <iostream>
#include <fstream>
Student::Student(const std::string& name, int age) : name(name), age(age) {}

void Student::saveFile(std::ostream& out)
{
    out << "Name: " << name << std::endl << "Age: " << age << std::endl;
}

void Student:: append( const std::string& filename)
{
   std::fstream file(filename, std::ios::in | std::ios::out);
   if (file.is_open())
   { 
        file.seekp(0, std::ios::end);
        file << "Name: " << name << std::endl << "Age: " << age << std::endl;
        file.close();
    }
   else
 {
       std::cerr << "Помилка відкриття файлу " << filename << std::endl;
   }
}