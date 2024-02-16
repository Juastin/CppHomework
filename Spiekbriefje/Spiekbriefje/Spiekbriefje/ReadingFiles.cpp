#include "ReadingFiles.h"
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void ReadingFiles::showStudents(const char filename[])
{
    Student student;
    ifstream f1;

    f1.open(filename, ios::binary);

    if (!f1.good()) {
        return;
    }
    f1.read((char*)&student, sizeof(student));
    while (!f1.eof()) {
        cout << "name= " << student.name << ", " << "birthday= " << student.birth.day << endl;
        f1.read((char*)&student, sizeof(student));
    }

    // Lines van text ending with '\n’ (endl) symbol in text files

    f1.close();
}

int ReadingFiles::countLines(const string script_name, const string actor_name)
{
    ifstream f1;
    f1.open(script_name);
    string line;
    int count_lines = 0;

    while (!f1.eof()) {
        getline(f1, line);
        if (line.find(actor_name) == 0) {
            count_lines += 1;
            cout << count_lines << endl;
        }
        else { continue; }
    }
    f1.close();
    return count_lines;
}

void ReadingFiles::getNameFromFile(const string actor_list, const string actor_name, const string output_file)
{
    ifstream f1;
    ofstream f2;

    f1.open(actor_list);
    f2.open(output_file);
    string line;

    while (!f1.eof()) {
        getline(f1, line);

        istringstream str(line);
        string word;
        while (str >> word) {
            //if (word == actor_name) // Hierbij klopt het niet wanneer het woord 'Horatio:' is ipv 'Horatio'
            if(word.find(actor_name) != string::npos) 
            {
                f2 << line << endl;
                cout << line << endl;
            }
            //cout << word << endl;
        }
    }
    f1.close();
    f2.close();
}

void readWithGet(string s) 
{
    istringstream sstr(s);
    char c;
    // .get() also gets the '\n', '\tb'
    while (sstr.get(c)) // of .getline()
        cout.put(c);
    cout << endl;
}

void writeStrings(const char* str) // This is to get past the '\0' charachter in a string.
{
    // For example the string is: 'This\0Is my\0'Substring!\0'
    // Then it must be looped three times because there are three '\0' characters.
    for (char c = *str; c; c = *++str) {
        std::cout << c;
    }
    str++;
    for (char c = *str; c; c = *++str) {
        std::cout << c;
    }
    str++;
    for (char c = *str; c; c = *++str) {
        std::cout << c;
    }
    std::cout << std::endl;
}
 

int ReadingFiles::countNameFromFile(const string actor_list, const string actor_name, const string output_file) 
{
    int count = 0;
    ifstream f1;
    ofstream f2;

    f1.open(actor_list);
    f2.open(output_file);
    string line;

    while (!f1.eof()) {
        getline(f1, line);
        istringstream str(line);
        string word;

        while (str >> word) {
            if (word.find(actor_name) != string::npos) {
                count++;
                cout << line << endl;
                f2 << line << endl;
            }
        }
    }
    cout << "Total amount of: " << actor_name << "=" << count << endl;
    f1.close();
    f2.close();
    return count;
}

int main()
{
     /* string names[] = { "Francisco", "Bernardo", "Horatio", "Marcellus" };

      cout << "=== Exercise a ===" << endl;
      for (int i = 0; i < 4; i++)
      {
          cout << "countLines(\"input.txt\", \"" + names[i] + "\") => " <<
              countLines("input.txt", names[i]) << endl;
      }*/

    //ReadingFiles::getNameFromFile("input.txt", "Horatio", "output.txt");
    ReadingFiles::countNameFromFile("input.txt", "Horatio", "output.txt");
}

