#include "Article.h"
using namespace std;
Article::Article(string brand, string model) {
	this->brand = brand;
	this->model = model;
}
Article::Article(): Article("unkown", "unkown") {}

string Article::toString() {
	return "";
}
