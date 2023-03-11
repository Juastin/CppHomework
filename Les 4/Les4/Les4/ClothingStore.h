#pragma once
#include <string>
#include "Article.h"
#include "Jacket.h"
#include "Trousers.h"
using namespace std;
class ClothingStore : public Article
{
private:
	string name;
	Article *articles[100];
	int num_articles;

public:
	ClothingStore(string name);
	void addArticle(string type, string brand, string model);
	string toString();
};

