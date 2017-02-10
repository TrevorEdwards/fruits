#ifndef _PEACH
#define _PEACH

#include <string>
#include "fruit.h"



class Peach : public Fruit{
	private: 
		//underscore before is for naming private things
		double _weight;
	public:
		Peach(std::string author());

		/** inherited method from parent */
		virtual ~Peach();

		virtual std::string get_name();

		virtual double get_weight();

		virtual bool is_delicious();

};

#endif