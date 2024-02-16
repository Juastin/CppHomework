#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
class ReadingFiles
{
public:
    int static countNameFromFile(const std::string, const std::string, const std::string);
    void static getNameFromFile(const std::string, const std::string, const std::string);
    int static countLines(const std::string, const std::string);
    void static showStudents(const char[]);
    // Because static is defined in the header, the compiler knows. So not needed in the .cpp file
};

struct Date {
    int day;
    char month[30];
    int year;
};

struct Student {
    int number;
    char name[40];
    Date birth;
};