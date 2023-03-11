#pragma once
#include <string>
using namespace std;
class Article {
protected:
	string brand;
	string model;
	string name;

public:
	virtual string toString() = 0;
	Article();
	Article(string brand, string name);
};