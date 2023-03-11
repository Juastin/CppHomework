#pragma once
#include <string>
#include "Article.h"
using namespace std;
class Jacket : public Article 
{
private:
	bool hood;
public:
	Jacket(string brand, string model, bool hood);
	string toString();
};

