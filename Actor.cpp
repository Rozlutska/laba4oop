#include "Actor.h"
#include <iostream>
Actor::Actor(const std::string& name, int age, const std::string& movie) : Student(name, age), movie(movie) {}

void Actor::saveFile(std::ostream& out)
{
    
    Student::saveFile(out);
    out<< "Movie: " << movie << std::endl;
}
void Actor::append(const std::string& filename)
{
    Student::append(filename);
}