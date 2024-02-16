#include "Lecture2.h"
#include <iostream>

//Console streams
//output -> cout << "Hello world" << std::endl;
//input -> cin >> age (put typed in things in var age)

//File streams
//header file
#include <fstream>
//output file stream ofstream
//endl of file: eof(returns true after failed read operation)
//openfile -> open(filename)
// close file -> close()

//String streams
//header file
#include <sstream>
//input string stream -> istringstream
// output string stream -> ostringstream
// stream converted to string str();

//structures
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

//string streams
struct Team {
	std::string name;
	int score;
};

std::string matchResult(Team team1, Team team2) {
	std::ostringstream sstr;
	sstr << team1.name << " - " << team2.name;
	while (sstr.str().length() < 25)
		sstr << " ";
	sstr << team1.score << " - " << team2.score;
	return sstr.str();
}

//convert float to string
std::string convertToString(float value) {
	std::ostringstream sstr;
	sstr << value;
	return sstr.str();
}

//reading per word
void splitSentence(const std::string sentence) {
	std::istringstream sstr(sentence);
	std::string word;
	while (sstr >> word)
		std::cout << word << std::endl;
}

//reading char by char
//abc
void readWithOutGet(std::string s) {
	std::istringstream sstr(s);
	char c;
	while (sstr >> c)
		std::cout << c;
	std::cout << std::endl;
}

//writing char by char with put
//    a    b
//		c
void readingWithGet(std::string s) {
	std::istringstream sstr(s);
	char c;
	while (sstr.get(c)) {
		std::cout.put(c);
	}

	std::cout << std::endl;
}

void writeStrings(const char* str)
{

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

int main()
{
	std::cout << "=== Part A ===" << std::endl;
	writeStrings("This\0is my\0substring!\0");
	std::cout << std::endl;
}


int main()
{
	//file streams
	std::ofstream f1;
	f1.open("bla.txt");
	f1 << "Hi 33" << std::endl;
	f1 << "Plop 44" << std::endl;
	f1.close();

	std::ifstream f2;
	std::string s; int i = 0;
	int num;
	f2.open("bla.txt");
	while (!f2.eof())
	{
		std::cout << "loop:" << i++;
		f2 >> s >> num;
		std::cout << "str=" << s << ", num=" << num << std::endl;
	}
	
	f2.close();
	return 0;

	//structures
	Date d;
	d.day = 26;
	d.month = "May";
	d.year = 2008;

	Student student;
	student.birth.year = 1980;
	student.number = 123456;
	
	Student group[30];
	group[0].number = 23;
	group[3].birth.day = 29;

	for (int i = 0; i < 30; i++) {
		group[i].number += 100;
	}

	//binary files
	Student s;
	std::ofstream fo;
	fo.open("bla.txt", std::ios::binary);
	fo.close();

	std::ifstream fi;
	fi.open("bla.txt", std::ios::binary);
	fi.read((char*)&s, sizeof(s));
	fi.close();

	//string stream
	Team t1 = { "Red Socks", 12 };
	Team t2 = { "Giants", 18 };
	Team t3 = { "Cardinals", 57 };
	Team t4 = { "Bulls", 12 };

	std::cout << matchResult(t1, t2) << std::endl;
	
	//reading inputstring
	splitSentence("Please split these words");

	//get/put
	//reading char by char
	readWithOutGet("	a\tb	\n	c");
	readingWithGet("	a\tb	\n	c");
	//writing char by char

	//cstrings
	//a cstring is an array of characters ended by the terminating null charachter
	//for a string of length 5 we need to allocate length 6
	//header file #include <cstring>
	//lenght: strlen()
	//copy: strcpy(dest, src) //only a certain amount of characters
		//strncpy(dest, src, count)
	//Concatenate: strcat(dest, src)
		//strncat(dest, src, count)
	//Compare : strcmp(lhs, rhs)
		//strncmp(lhs, rhs, count)
	//memcpy(dest, src, count)
	//memset(dest, ch, count)

}
