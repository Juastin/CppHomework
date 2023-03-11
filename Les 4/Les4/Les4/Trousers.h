#pragma once
#include <string>
#include "Article.h"
using namespace std;
class Trousers : public Article
{
private:
	int num_pockets;
public:
	Trousers(string brand, string model, int num_pockets);
	string toString();
};

