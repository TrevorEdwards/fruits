#include "peach.h"

Peach::Peach(std::string author):Fruit(author) {
	_weight = 3.0;
}

Peach::~Peach() {
}

std::string Peach::get_name() {
	return “Peach”;
}

bool Peach::is_delicious(){
	return true;
}

double Peach::get_weight(){
	return _weight;
}