#include "ClothingStore.h"
using namespace std;
ClothingStore::ClothingStore(string name) {
	this->name = name;
}
void ClothingStore::addArticle(string type, string brand, string model) {
	this->num_articles += 1;
	if (type == "Jacket") {
		this->articles[this->num_articles] = new Jacket(brand, model, true);
	}
	if (type == "Trousers") {
		this->articles[this->num_articles] = new Trousers(brand, model, 5);
	}
}
string ClothingStore::toString() {

}

