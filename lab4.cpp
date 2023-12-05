#include <iostream>
#include <fstream>
#include "Student.h"
#include "Actor.h"
#include "KVN.h"

int main() 
{
    Student student("Julia", 20);
    Actor actor("Olexandra", 21, "Friends");
    KVN kvn("Oksana", 22, "This Funny Team");

    std::ofstream outputFile;
    outputFile.open("lab4.txt", std::ios::out);

    student.saveFile(outputFile);
    actor.saveFile(outputFile);
    kvn.saveFile(outputFile);
    outputFile.close();
    student.append("lab4.txt");
    kvn.append("lab4.txt");

    return 0;
}