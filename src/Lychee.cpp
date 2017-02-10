#include "Lychee.h"

Lychee::Lychee(std::string author) : Fruit(author){ //The second part after the semicolon is like super() in Java, referring to constructor in superclass
	_weight = 3.0;
}

Lychee::~Lychee(){
}

std::string Lychee::get_name(){
	return "Orange";
}

bool Lychee::is_delicious(){
	return true;
}

double Lychee::get_weight(){
	return _weight; //name weight with _ because naming convention for private things
}
