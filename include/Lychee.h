#ifndef _LYCHEE_
#define _LYCHEE_

#include <string>

#include "fruit.h"

class Lychee : public Fruit{
	private:
		double _weight;
	public:
		Lychee(std::string author); //std means standard, namespace operator, could implement 
		//your own version of string in your own namespace and use that namespace so computer can tell which string to use
		
		virtual ~Lychee();
		
		virtual std::string get_name();
		
		virtual double get_weight();
		
		virtual bool is_delicious();
		
};

#endif